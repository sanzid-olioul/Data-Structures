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

                if root.data > data:
                    if root.left is not None:
                        newQueue.put(root.left)
                    else:
                        root.left = TreeNode()
                        root.left.data = data
                        break
                elif root.data < data:
                    if root.right is not None:
                        newQueue.put(root.right)
                    else:
                        root.right = TreeNode()
                        root.right.data = data
                        break   
                else:
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

    def search(self,data):
        newQueue = Queue()
        newQueue.put(self.root)
        while not newQueue.empty():
            root = newQueue.get()
            if root.data == data:
                return True
            if root.left is not None:
                newQueue.put(root.left)
            if root.right is not None:
                newQueue.put(root.right)
        return False

    def remove(self,data):
        newQueue = Queue()
        newQueue.put(self.root)
        rmdatand = None
        lstnd = None
        while not newQueue.empty():
            root = newQueue.get()
            if root.data == data:
                rmdatand = root
            lstnd = root
            print(root.data)
            if root.left is not None:
                newQueue.put(root.left)
            if root.right is not None:
                newQueue.put(root.right)
        
        rmdatand.data = lstnd.data
        newQueue.put(self.root)
        while not newQueue.empty():
            root = newQueue.get()
            if root.left == lstnd:
                root.left = None
                break
            if root.right == lstnd:
                root.right = None
                break
            if root.left is not None:
                newQueue.put(root.left)
            if root.right is not None:
                newQueue.put(root.right)

    def delete(self):
        self.root = None

if __name__ == "__main__":
    bt = BinaryTree()
    bt.addChild(200)
    bt.addChild(115)
    bt.addChild(125)
    bt.addChild(35)
    bt.addChild(455)
    bt.addChild(55)
    bt.addChild(650)
    bt.LabelOrderTraversal()
    print()
    bt.PriOrderTraversal()

    print()
    bt.InOrderTraversal()

    print()
    bt.PostOrderTraversal()

    bt.remove(35)
    bt.LabelOrderTraversal()
    print(bt.search(15))
    bt.delete()