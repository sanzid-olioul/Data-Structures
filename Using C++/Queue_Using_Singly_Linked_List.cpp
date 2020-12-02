#include<iostream>
template <typename T>
class Node{
public:
    T Data;
    Node<T> *next;
};
template <typename T>
class Queue{
private:
    Node<T> *head,*tail;
public:
    Queue<T>(){
        head = NULL;
        tail = NULL;
    }
    void enqueue(T data){
        if(!head){
            head = new Node<T>;
            head->Data = data;
            head->next =NULL;
        }else{
            if(!tail){
                Node<T> *temp;
                tail = new Node<T>;
                tail->Data = data;
                tail->next = head;
                temp = tail;
                tail = head;
                head = temp;

            }else{
                Node<T> *temp = new Node<T>;
                temp->Data = data;
                temp->next = head;
                head = temp;
            }
        }
    }
    T dequeue(){
        Node<T> *temp1 = new Node<T>;
        T last;
        last = tail->Data;
        temp1 = head;
        if(head->next){
            while(temp1->next != tail)
                temp1 = temp1->next;
            delete[] tail;
            tail = temp1;
            tail->next = NULL;
            return last;
        }else{
            last = head->Data;
            delete[] head;
            return last;
        }
    }
    void show(){
        Node<T> *temp;
        temp = new Node<T>;
        temp = this->head;
        while(temp){
            std::cout<<temp->Data<<std::endl;
            temp = temp->next;
        }
    }
    T last(){
        return tail->Data;
    }

};

int main()
{
    Queue<int> qu;
    qu.enqueue(5);
    qu.enqueue(15);
    qu.enqueue(51);
    qu.enqueue(55);
    qu.enqueue(57);
    std::cout<<"The Last Elements"<<qu.last()<<std::endl;

    qu.show();
    std::cout<<qu.dequeue()<<std::endl;
    std::cout<<qu.dequeue()<<std::endl;
    std::cout<<qu.dequeue()<<std::endl;
    std::cout<<qu.dequeue()<<std::endl;
    std::cout<<"Is the last Queur"<<std::endl;
     qu.show();

    std::cout<<qu.dequeue()<<std::endl;


    return 0;
}
