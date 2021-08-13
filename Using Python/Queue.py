class Node:
    def __init__(self,data=None):
        self.data = data
        self.next = None

class Queue:
    def __init__(self):
        self.front = Node()
        self.back = self.front
        self.len = 0
    
    def push(self,data):
        newNode = Node()
        newNode.data = data
        self.back.next = newNode
        self.back = newNode
        self.len+=1
    
    def pop(self):
        if self.len == 0:
            self.back = self.front
        if self.len > 0:
            temp = self.front.next
            temp1 = temp.data

            self.front.next = temp.next
            del temp
            self.len-=1
            return temp1 
            
        return False
    
    def enpty(self):
        if self.len == 0:
            return True
        return False

    def search(self,data):
        temp = self.front.next
        cou =0
        while temp.next !=None:
            cou+=1
            if temp.data == data:
                return self.len
            temp = temp.next
        return -1


if __name__ =='__main__':
    stk = Queue()
    for i in range(1,25,1):
        stk.push(i)
    for i in range(1,26,1):
        print(stk.pop())

    for i in range(255,11,-1):
        stk.push(i)

    print(stk.search(2),end="\n\n\n")
    for i in range(17,76,1):
        print(stk.pop())