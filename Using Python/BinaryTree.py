from queue import Queue
class TreeNode:
    def __init__(self,data=None):
        self.data = data
        self.left = None
        self.right = None

class BinaryTree:
    def __init__(self):
        self.root = None
    
    def addChild(self,data):
        if self.root is None:
            self.root = TreeNode()
            self.root.data = data
        else:
            newQueue = Queue()
            newQueue.put(self.root)

            while not newQueue.empty():
                root = newQueue.get()
                if root.left is not None:
                    newQueue.put(root.left)
                else:
                    root.left = TreeNode()
                    root.left.data = data
                    break
                if root.right is not None:
                    newQueue.put(root.right)
                else:
                    root.right = TreeNode()
                    root.right.data = data
                    break     
            
    def LabelOrderTraversal(self):
        newQueue = Queue()
        newQueue.put(self.root)
        while not newQueue.empty():
            root = newQueue.get()
            print(root.data)
            if root.left is not None:
                newQueue.put(root.left)
            if root.right is not None:
                newQueue.put(root.right)
    
    def PriOrderTraversal(self,root = None):
        if root is None:
            root = self.root
        print(root.data)
        if root.left is not None:
            self.PriOrderTraversal(root.left)
        if root.right is not None:
            self.PriOrderTraversal(root.right)
        
    def InOrderTraversal(self,root = None):
        if root is None:
            root = self.root
        if root.left is not None:
            self.InOrderTraversal(root.left)
        print(root.data)
        if root.right is not None:
            self.InOrderTraversal(root.right)
 
    def PostOrderTraversal(self,root = None):
        if root is None:
            root = self.root
        if root.left is not None:
            self.PostOrderTraversal(root.left)
        if root.right is not None:
            self.PostOrderTraversal(root.right)
        print(root.data)


bt = BinaryTree()
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