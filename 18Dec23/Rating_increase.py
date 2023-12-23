t=int(input())

def f(s):
    if len(s)==2:
        a,b=int(s[0]),int(s[1])
        if b>a:
            print(a,b)
            return
        else:
            print(-1)
            return
    else:
        for i in range(0,len(s)//2):
            if s[i+1]==str(0):
                continue
            else:
                a,b=int(s[:i+1]),int(s[i+1:])
                if b>a:
                    print(a,b)
                    return
                else:
                    print(-1)
                    return
        print(-1)
for i in range(t):
    a=input()
    f(a)