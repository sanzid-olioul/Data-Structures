class Node:
    def __init__(self,data = None):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = Node()
        self.tail = self.head
        self.len = 0
    
    def append(self,data):
        newNode = Node()
        newNode.data = data
        self.tail.next = newNode
        self.tail = newNode
        self.len+=1
    
    def insert(self,pos,data):
        if pos > self.len:
            return False
        temp = self.head
        for i in range(pos):
            temp = temp.next

        newNoe = Node()
        newNoe.data = data
        newNoe.next = temp.next
        temp.next = newNoe
        self.len+=1
        return True

    def find(self,data):
        temp = self.head
        while temp.next !=None:
            temp = temp.next
            if temp.data == data:
                return True
        return False

    def remove(self,data):
        temp = self.head
        while temp.next !=None:
            prev = temp
            temp = temp.next
            if temp.data == data:
                prev.next = temp.next
                del temp
                return True
        return False

    def replace(self,old_data,new_data):
        temp = self.head
        while temp.next !=None:
            temp = temp.next
            if temp.data == old_data:
                temp.data = new_data
                return True
        return False

    def show(self):
        temp = self.head
        while temp.next !=None:
            temp = temp.next
            print(temp.data,end=" ")

if __name__ == '__main__' :

    lst = LinkedList()
    for i in range(5,75,3):
        lst.append(i)
    print(lst.len)
    print(lst.find(5))
    lst.remove(5)
    print(lst.find(5))
    print(lst.find(50))
    lst.remove(50)
    print(lst.find(50))
    lst.insert(1,795)
    lst.insert(7,758)
    lst.show()
    lst.replace(14,7854)
    print()
    lst.show()