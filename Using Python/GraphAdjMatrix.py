graph = [[0 for i in range(10)] for i in range(10)]






#node = int(input())
vatex = int(input())
for i in range(vatex):
    x,y = [int(i) for i in input().split()]
    graph[x][y] = 1
    graph[y][x] = 1
    




for i in range(10):
    print("| ",end="")
    for j in range(10):
        print(graph[i][j],end="\t")
    print(" |")
