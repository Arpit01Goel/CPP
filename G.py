import math
from collections import defaultdict

def add_edge(u, v, w):
    graph[u].append((v, w))
    graph[v].append((u, w))

def dfs(node, parent, length, gcd):
    global max_product
    max_product = max(max_product, length * gcd)
    for child, weight in graph[node]:
        if child != parent:
            dfs(child, node, length + 1, math.gcd(gcd, weight))

t = int(input())
for _ in range(t):
    n = int(input())
    graph = defaultdict(list)
    for _ in range(n - 1):
        u, v, w = map(int, input().split())
        add_edge(u, v, w)
    max_product = 0
    dfs(1, 0, 0, 0)
    print(max_product)