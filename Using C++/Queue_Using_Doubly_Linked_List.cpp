#include<iostream>
template <typename T>
class Node{
public:
    T Data;
    Node<T> *next;
    Node<T> *prev;
};
template <typename T>
class Queue{
private:
    Node<T> *head,*tail;
public:
    Queue<T>(){
        this->head = NULL;
        this->tail = NULL;
    }
    void enqueue(T data){
        if(!head){
            head = new Node<T>;
            head->Data = data;
            head->prev =NULL;
            head->next = NULL;
        }else{
            if(!tail){
                tail = new Node<T>;
                tail->Data = data;
                head->next = tail;
                tail->prev = head;
                tail->next = NULL;
            }else{
                Node<T> *temp = new Node<T>;
                temp->Data = data;
                temp->next = NULL;
                temp->prev = tail;
                tail->next = temp;
                tail = temp;
            }
        }
    }
    T dequeue(){
        //std::cout<<"I called"<<std::endl;
        T data;
        Node<T> *temp;
        data = head->Data;
        std::cout<<data<<" Is dequewed"<<std::endl;
        if(head->next){
            temp = head->next;
            delete[] head;
            head = temp;
            head->prev = NULL;
            return data;
        }else{
            delete[] tail;
            delete[] head;
            head = NULL;
            tail = NULL;
            return data;
        }
    }
    bool isEmpty(){
        if(!head){
            return true;
        }else{
            return false;
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
    void revShow(){
        Node<T> *temp;
        temp = new Node<T>;
        temp = this->tail;
        while(temp){
            std::cout<<temp->Data<<std::endl;
            temp = temp->prev;
        }
    }

};
int main()
{

    Queue<int> qu;
    std::cout<<qu.isEmpty()<<std::endl;
    qu.enqueue(5);
    qu.enqueue(10);
    qu.enqueue(15);
    qu.enqueue(20);
    qu.enqueue(25);
    qu.enqueue(30);
    qu.enqueue(35);
     std::cout<<qu.isEmpty()<<std::endl;
    qu.show();
    std::cout<<"End"<<std::endl;
    qu.revShow();
    std::cout<<"End"<<std::endl;

    std::cout<<qu.dequeue()<<" Dequewed"<<std::endl;
    std::cout<<qu.dequeue()<<" Dequewed"<<std::endl;
     std::cout<<qu.dequeue()<<" Dequewed"<<std::endl;
     std::cout<<qu.dequeue()<<" Dequewed"<<std::endl;
     std::cout<<qu.dequeue()<<" Dequewed"<<std::endl;
     std::cout<<qu.dequeue()<<" Dequewed"<<std::endl;
     qu.enqueue(5);
    qu.enqueue(10);
    qu.enqueue(15);
    qu.enqueue(20);
    qu.enqueue(25);
    qu.enqueue(30);
    qu.enqueue(35);
     std::cout<<qu.dequeue()<<" Dequewed"<<std::endl;
     //std::cout<<qu.dequeue()<<" Dequewed"<<std::endl;
      std::cout<<qu.isEmpty()<<std::endl;
      std::cout<<qu.dequeue()<<" Dequewed"<<std::endl;
    std::cout<<qu.dequeue()<<" Dequewed"<<std::endl;
     std::cout<<qu.dequeue()<<" Dequewed"<<std::endl;
     std::cout<<qu.dequeue()<<" Dequewed"<<std::endl;
     std::cout<<qu.dequeue()<<" Dequewed"<<std::endl;
     std::cout<<qu.dequeue()<<" Dequewed"<<std::endl;
      std::cout<<qu.dequeue()<<" Dequewed"<<std::endl;
    //qu.show();
    //qu.revShow();


    return 0;
}
