t = int(input())
for _ in range(t):
    [n, m] = input().split()
    n,m=int(n),int(m)
    if n > m:
        n, m = m, n
    if n == 1:
        print(1)
    else:
        print(m)