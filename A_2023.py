t = int(input())
a = [1,7,17,119,289,2023]

for _ in range(t):
    n, k = map(int, input().split())
    b = list(map(int, input().split()))
    num=1
    for i in b:
        num*=i
    if 2023%num==0:
        print("YES")
        #now print k numbers whose product is 2023/num
        num2=2023//num
        print(num2,end=" ")  
        for i in range(k-1):
            print(1,end=" ")
        print()
        

    else:
        print("NO")
