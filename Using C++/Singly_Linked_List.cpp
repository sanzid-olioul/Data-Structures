#include<iostream>
template <typename T>
class Node{
public:
    T Data;
    Node<T> *next;
};
template <typename T>
class Linked_List{
public:
    Node<T> *head;
    Node<T> *tail;
    Linked_List<T>(){
        this->head = NULL;
        this->tail = NULL;
    }
    void add(T data){
        if(!head){
            head = new Node<T>;
            head->Data = data;
            head->next = NULL;
            tail = head;
        }
        else{
            if(head==tail){
                tail = new Node<T>;
                tail->Data = data;
                tail->next =NULL;
                head->next = tail;
            }else{
                Node<T> *temp;
                temp = new Node<T>;
                temp->Data = data;
                temp->next = NULL;
                tail->next = temp;
                tail = temp;
            }
        }
    }
    void show(){
        Node<T> *temp;
        temp = new Node<T>;
        temp = this->head;
        while(temp->next){
            std::cout<<temp->Data<<std::endl;
            temp = temp->next;
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

    return 0;
}
