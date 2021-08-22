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

    def dfs(self,root,visited = ()):
        if root not in visited:
            print(root)
            visited += (root,)
            for i in self.graph.get(root,[]):
                self.dfs(i,visited)

if __name__ == '__main__':

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
    gr.dfs("A")
    gr2.show() 
    gr2.dfs("A")