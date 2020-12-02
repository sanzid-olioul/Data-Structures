#include<iostream>
template<typename T>
class Node{
public:
    T data;
    Node<T> *next;
};
template<typename T>
class Stack{
    Node<T> *head,*tail;
    public:
    Stack<T>(){
        this->head =NULL;
        this->tail = NULL;
    }
    void push(T data){
        if(!head){
            head = new Node<T>;
            head->data = data;
            head->next = NULL;
        }else{
            if(!tail){
                tail = new Node<T>;
                tail->data = data;
                tail->next = head;
                head = tail;
            }else{
                Node<T> *temp = new Node<T>;
                temp->data = data;
                temp->next = head;
                head = temp;
            }
        }

    }


    bool empty(){
        if(!head){
            return true;
        }
        else{
            return false;
        }
    }

     T pop(){
        if(!empty()){

            T value;
            value = head->data;
            Node<T> *temp;
            temp = head->next;
            delete[] head;
            head = temp;
            return value;
        }else{
            std::cout<<"Stack is empty"<<std::endl;
        }

    }

    void show(){
        Node<T> *temp;
        temp = new Node<T>;
        temp = this->head;
        while(temp->next){
            std::cout<<temp->data<<std::endl;
            temp = temp->next;
        }
    }
};


int main()
{
    Stack<int> st;
    st.push(5);
    st.push(10);
    st.push(15);
    st.push(25);
    st.push(30);
    std::cout<<st.pop()<<std::endl;
    std::cout<<st.pop()<<std::endl;
    std::cout<<st.pop()<<std::endl;
    std::cout<<st.pop()<<std::endl;
    st.push(10);
    st.push(15);
    st.push(25);
    st.push(30);
    std::cout<<st.pop()<<std::endl;
    std::cout<<st.pop()<<std::endl;
    std::cout<<st.pop()<<std::endl;
    std::cout<<st.pop()<<std::endl;
    return 0;
}
