#include<bits/stdc++.h>
class LinkedList{
    private:
        struct Node{
        int data;
        struct Node *next;
        };
        struct Node *head = NULL,*newNode,*tail,*sLast;
    public:
        struct Node *travel;
        LinkedList(){
            travel=(struct Node*)malloc(sizeof(struct Node));
        }
        //push_back implementation
        void push_back(int n)
        {
            newNode = (struct Node*)malloc(sizeof(struct Node));
            if(head== NULL){
                head = newNode;
                head->data = n;
                head->next =NULL;
                travel = head;
            }
            else{
                if(head->next ==NULL){
                    tail = newNode;
                    tail->data = n;
                    head->next = tail;
                    tail->next =NULL;
                }else{
                    //struct Node *temp;
                    tail->next = newNode;
                    tail = newNode;
                    tail->data = n;
                    tail->next = NULL;
                }
            }
        }
        //push_front implementation
        void push_front(int n)
        {
            struct Node *temp;
            newNode = (struct Node*)malloc(sizeof(struct Node));
            temp = newNode;
            temp->data = n;
            temp->next = head;
            head = temp;
        }

        int front()
        {
            return head->data;
        }
        int back()
        {
            return tail->data;
        }
};



int main()
{
    int first,last;
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

    lst2.push_front(100);
    lst2.push_front(110);
    lst2.push_front(111);
    lst2.push_back(16);
    lst2.push_front(102);
    lst2.push_front(113);
    lst2.push_front(114);
    while(lst.travel){
        std::cout<<lst.travel->data<<std::endl;
        lst.travel = lst.travel->next;
    }


    std::cout<<std::endl;
    while(lst2.travel){
        std::cout<<lst2.travel->data<<std::endl;
        lst2.travel = lst2.travel->next;
    }
    std::cout<<std::endl<<lst.front()<<std::endl<<lst.back()<<std::endl;

    return 0;
}
