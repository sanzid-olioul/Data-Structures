#include<iostream>
template <typename T>
class Node{
public:
    T Data;
    Node<T> *next;
    Node<T> *prev;
};
template <typename T>
class Linked_List{
private:
    Node<T> *head,*tail;
public:
    Linked_List<T>(){
        this->head = NULL;
        this->tail = NULL;
    }
    void add(T data){
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
    Linked_List<int> num;
    Linked_List<std::string> name;
    num.add(5);
    num.add(10);
    num.add(51);
    num.add(52);
    num.add(53);
    num.add(35);
    num.add(54);
    num.add(45);
    num.add(55);
    num.add(55);

    name.add("Sanzid");
    name.add("Olioul");
    name.add("Tanzid");
    name.add("Tusar Imran");
    name.add("Towheedur Rahman");

    num.show();
    name.show();
    num.revShow();
    name.revShow();
    return 0;
}
