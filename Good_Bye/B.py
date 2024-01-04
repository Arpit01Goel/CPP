t=int (input())
def hcf(a,b):
    #find hcf using euclid's algorithm
    #check order of a and b
    if a>b:
        a,b=b,a
    #now a is smaller
    while a!=0:
        temp=a
        a=b%a
        b=temp
    return b

for _ in range(t) :
    a,b=map(int,input().split())
    hf=hcf(a,b)
    #let a is less than b
    if a>b:
        a,b=b,a
    #now a is smaller
    a=a//hf
    b=b//hf
    if a==1:
        print(hf*b*b) 
    else :
        print(a*b*hf)