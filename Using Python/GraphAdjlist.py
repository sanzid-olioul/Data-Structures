graph = [[] for i in range(10)]



edges = int(input())
for i in range(edges):
    x,y = [int(i) for i in input().split()]
    graph[x].append(y)
    graph[y].append(x)

for i in graph:
    print(i)