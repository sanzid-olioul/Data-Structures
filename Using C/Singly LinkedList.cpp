#include<bits/stdc++.h>
class LinkedList{
    private:
        struct Node{
        int data;
        struct Node *next;
        };
    public:
        struct Node *head = NULL,*newNode,*temp;
        void push_back(int n)
        {
            newNode = (struct Node*)malloc(sizeof(struct Node));
            if(head== NULL){
                head = temp = newNode;
                head->data = n;
            }
            else{
                temp->next = newNode;
                temp->data = n;
                temp = newNode;
            }
        }
};



int main()
{
    LinkedList lst,lst2;
    lst.push_back(5);
    lst.push_back(6);
    lst.push_back(7);
    lst.push_back(8);
    lst.push_back(9);
    lst.push_back(10);


    lst2.push_back(11);
    lst2.push_back(12);
    lst2.push_back(13);
    lst2.push_back(14);
    lst2.push_back(15);
    lst2.push_back(16);
    lst.temp = lst.head;
    while(lst.temp->next!= NULL){
        std::cout<<lst.temp->data<<std::endl;
        lst.temp = lst.temp->next;
    }


    std::cout<<std::endl;
    lst2.temp = lst2.head;
    while(lst2.temp->next!= NULL){
        std::cout<<lst2.temp->data<<std::endl;
        lst2.temp = lst2.temp->next;
    }

    return 0;
}
