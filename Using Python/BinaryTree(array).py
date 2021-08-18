class BinaryTree:
    def __init__(self,size):
        self.tree = [None]*size
        self.pos = 1
    def addChild(self,data):
        self.tree[self.pos] = data
        self.pos +=1
    def LabelOrderTraversal(self):
        for i in range(1,self.pos):
            print(self.tree[i])
    def PriOrderTraversal(self,pos = 1):
        if pos >= self.pos:
            return
        print(self.tree[pos])
        self.PriOrderTraversal(2*pos)
        self.PriOrderTraversal(2*pos+1)

    def InOrderTraversal(self,pos = 1):
        if pos >= self.pos:
            return
        self.InOrderTraversal(2*pos)
        print(self.tree[pos])
        self.InOrderTraversal(2*pos+1)

    def PostOrderTraversal(self,pos = 1):
        if pos >= self.pos:
            return
        self.PostOrderTraversal(2*pos)
        self.PostOrderTraversal(2*pos+1)
        print(self.tree[pos])
    def search(self,data):
        for i in range(1,self.pos):
            if self.tree[i] ==data:
                return True
        return False
    def remove(self,data):
        for i in range(1,self.pos):
            if self.tree[i] ==data:
                self.tree[i] = self.tree[self.pos]
                self.tree[self.pos] = None
                self.pos-=1
                return
    def delete(self):
        self.pos = 1
        self.tree = []*len(self.tree + 1)
    
if __name__ == "__main__":
    bt = BinaryTree(20)
    bt.addChild(5)
    bt.addChild(15)
    bt.addChild(25)
    bt.addChild(35)
    bt.addChild(45)
    bt.addChild(55)
    bt.addChild(65)
    bt.LabelOrderTraversal()
    print()
    bt.PriOrderTraversal()

    print()
    bt.InOrderTraversal()

    print()
    bt.PostOrderTraversal()

    bt.remove(25)
    # bt.LabelOrderTraversal()
    print(bt.search(15))
    # bt.delete()
