from typing import Text


class Node:
    def __init__(self,data=None):
        self.data = data
        self.next = None

class Stack:
    def __init__(self):
        self.top = Node()
        self.len = 0
    
    def push(self,data):
        self.top.data = data
        newNode = Node()
        newNode.next = self.top
        self.top = newNode
        self.len+=1
    
    def pop(self):
        if self.len > 0:
            temp = self.top.next
            temp1 = temp.data

            self.top.next = temp.next
            del temp
            self.len-=1
            return temp1 
            
        return False
    
    def enpty(self):
        if self.len ==0:
            return True
        return False

    def search(self,data):
        temp = self.top.next
        cou =0
        while temp.next !=None:
            cou+=1
            if temp.data == data:
                return self.len - cou
            temp = temp.next
        return -1


if __name__ =='__main__':
    stk = Stack()
    for i in range(1,25,1):
        stk.push(i)
    for i in range(1,26,1):
        print(stk.pop())

    for i in range(1,25,1):
        stk.push(i)

    print(stk.search(2),end="\n\n\n")
    for i in range(1,26,1):
        print(stk.pop())