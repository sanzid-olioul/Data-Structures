from queue import Queue
class Graph:
    def __init__(self):
        self.graph ={}
    def insert_directed(self,key,val):
        self.graph[key] = self.graph.get(key,[])+[val]
    
    def insert_undirected(self,key,val):
        self.graph[key] = self.graph.get(key,[])+[val]
        self.graph[val] = self.graph.get(val,[])+[key]


    def show(self):
        for key,val in self.graph.items():
            print(key,val)
    
    def bfs(self,root):
        flag = []
        flag.append(root)
        que = Queue()
        que.put(root)
        while not que.empty():
            val = que.get()
            print(val)
            for x in self.graph.get(val,[]):
                if x not in flag:
                    que.put(x)
                    flag.append(x)
                




gr = Graph()
gr2 = Graph()
gr.insert_directed("A","C")
gr.insert_directed("C","B")
gr.insert_directed("A","D")
gr.insert_directed("D","H")
gr.insert_directed("C","F")
gr.insert_directed("F","G")
gr.insert_directed("D","H")

gr2.insert_undirected("A","C")
gr2.insert_undirected("B","C")
gr2.insert_undirected("D","A")
gr2.insert_undirected("D","H")
gr2.insert_undirected("C","F")
gr2.insert_undirected("F","G")
gr2.insert_undirected("D","H")

gr.show()

gr.bfs("A")

gr2.show()
gr2.bfs("A")