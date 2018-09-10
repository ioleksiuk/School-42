
import os, re, argparse, sys



def shorten(num):
    if float("{:.6f}".format(num)) != num:
        result = float("{:.6f}".format(num))
    else:
        result = num
    if float(num)==int(num):
        result=int(num)
    return result

def solver(string):
    equation_list=string.split('=')
    equation_list=["".join(i.split()) for i in equation_list]
    temp_list=[re.split("[+\-]",i) for i in equation_list]
    for index,val in enumerate(temp_list):
        for index2,val2 in enumerate(temp_list[index]):
            try:
                float(val2) == 0
                if float(val2) == 0:
                    val2 = '0 * x^'+str(index2)
                    temp_list[index][index2]=val2
                    equation_list[index]=val2
            except:
                None
    for index,val in enumerate(temp_list):
	    temp_list[index] = list(filter(None, temp_list[index]))

    global coeff_left,coeff_right,coeff,degree
    coeff_left = [float(i) for i in [i[:i.index('*')] for i in temp_list[0]]]
    coeff_right = [float(i) for i in [i[:i.index('*')] for i in temp_list[1]]]

    list_minus=[[],[]]
    for i in equation_list:
        for index, val in enumerate(equation_list[equation_list.index(i)]):
            if val=='-':
                list_minus[equation_list.index(i)].append(index+1)

    for i in temp_list[0]:
	    if equation_list[0].index(i) in list_minus[0]:
	        coeff_left[temp_list[0].index(i)]*=(-1)
    for i in temp_list[1]:
	    if equation_list[1].index(i) in list_minus[1]:
	        coeff_right[temp_list[1].index(i)]*=(-1)

    if len(coeff_left)!=len(coeff_right):
	    while len(coeff_left)>len(coeff_right):
	        coeff_right.append(0)
	    while len(coeff_left)<len(coeff_right):
	        coeff_left.append(0)
    
    coeff = [x-y for x,y in zip(coeff_left,coeff_right)]      
    degree=len(coeff)-1                                       
 
    try:
        if coeff[-1]==0.0:
            while coeff[-1]==0.0:
                del coeff[-1]
    except:
        coeff.append(0)
        coeff_left.append(0)
        coeff_right.append(0)
        
def reduced():
    reduced=''          
    for index,val in enumerate(coeff):
        if val>=0 and index!=0:
            reduced+=' + '
        elif val<0 and index!=0:
            reduced+=' - '
            val=-val
        if index!=len(coeff)-1:
            if index==0:
                reduced=reduced+str(shorten(val))
            elif index>0:
                if index==1:
                    if val==1:
                        reduced+='x'
                    else:
                        reduced+=str(shorten(val))+' * '+'x'
                else:
                    if val==1:
                        reduced+='x^'+str(index)
                    else:
                        reduced=reduced+str(shorten(val))+' *'+' x^'+str(index)
                
        elif index==len(coeff)-1:
            if index==1:
                if val==1:
                    reduced+='x'+' = 0'
                else:
                    reduced+=str(shorten(val))+' * '+'x'+' = 0'
            else:
                if val==1:
                    reduced+='x^'+str(index)+' = 0'
                else:
                    reduced=reduced+str(shorten(val))+' *'+' x^'+str(index)+' = 0'
    return reduced

def solution():
    
    if degree > 2:
        print("The polynomial degree is strictly greater than 2, I can't solve.")
    elif degree == 1:
        sol = shorten(-coeff[0]/coeff[1])
        print("The solution is:","\n", sol)
    elif degree == 0:
        if coeff_right[0]!=0 and coeff_left[0]!=0:
            if coeff_left[0]!=coeff_right[0]:
                print("There are no solutions to this equation")
            elif coeff_left[0]==coeff_right[0]:
                print("All the real numbers are solutions")
        elif coeff_right[0]==0:
            if coeff_left[0]!=0:
                print("All the real numbers are solutions")
        elif coeff_left[0]==0:
            if coeff_right[0]!=0:
                print("All the real numbers are solutions")    
    elif degree == 2:
        D = coeff[1]*coeff[1]-4*coeff[2]*coeff[0]
        if D<0:
            sol1=str(shorten(-coeff[1]/(2*coeff[2])))+'-'+str(shorten(((-D)**(1/2))/(2*coeff[2])))+'i'
            sol2=str(shorten(-coeff[1]/(2*coeff[2])))+'+'+str(shorten(((-D)**(1/2))/(2*coeff[2])))+'i'
            print("Discriminant is negative, the complex solution is:","\n",sol1,"\n",sol2)
        if D==0:
            sol=shorten(-coeff[1]/(2*coeff[0]))
            print("Discriminant is equal zero, the solution is:","\n", sol)
        if D>0:
            sol1=shorten((-coeff[1]-D**(1/2))/(2*coeff[2]))
            sol2=shorten((-coeff[1]+D**(1/2))/(2*coeff[2]))
            print("Discriminant is strictly positive, the two solutions are:","\n", sol1,"\n",sol2)

if __name__ == '__main__':
    try:
        string= sys.argv[1]
    except:
        string=''
    if string=="h":
        print( "\n"+"All terms must be of the form a*x^p, the powers are well ordered "
              +"\n"+"and all present. Coefficients can be null, negative, not integers:"+"\n"
              +"\n"+"5 * x^0 + 4.2 * x^1 - 9 * x^2 = 0"+"\n"
              +"\n"+"Variable - letters a-z or words:" +"\n"
              +"\n"+"5 * y^0 + 4 * y^1 + 9 * y^2 = 0")
        sys.exit()
    if type(string)!=str:
        print("Not an equation")
        sys.exit()
    elif len(string)<3:
        print("Not an equation")
        sys.exit()
    elif string.count('=')!=1:
        print("Not an equation")
        sys.exit()
    elif string[0] == "=" or string[len(string)-1] == "=":
        print("Not an equation")
        sys.exit()
    try:
        solver(string)
        if degree!=0:
            print("Reduced form:", reduced())
            print('Polynomial degree:',degree)
        solution()
    except:
        print("Not accepted format of input. Use \"h\" for help")


