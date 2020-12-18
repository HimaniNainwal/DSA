from array import *
t=int(input("Enter the no. of test cases : "))
while t>=1:
    t=t-1
    A = array('i',[])
    s=int(input("Enter the array size : "))
    print("Enter the array elements : ")
    for i in range(s):
        x=int(input())
        A.append(x)
    a=int(input("Enter the element whose index to be searched : "))
    for q in A:
        if q==a:
            print(A.index(a))
            break
        elif q==s:
            print("-1")
            break
    


    
