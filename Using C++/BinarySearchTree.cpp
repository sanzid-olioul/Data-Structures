#include<iostream>
template<typename T>
class Node{
public:
    T data;
    Node *LST,*RST;
};
template<typename T>
class BST{
    Node<T> *root;
public:
    BST(){
        root = NULL;
    }
    void add(T data){
        if(!root){
            root = new Node<T>;
            root->data = data;
            root->LST = NULL;
            root->RST = NULL;
        }else{
            Node<T> *trv = root;
            while(trv){
                if(trv->data < data){
                    if(!trv->RST){
                        Node<T> *temp = new Node<T>;
                        temp->data = data;
                        temp->LST = NULL;
                        temp->RST = NULL;
                        trv->RST = temp;
                        break;
                    }
                    else{
                        trv = trv->RST;
                    }
                }else{
                    if(!trv->LST){
                        Node<T> *temp = new Node<T>;
                        temp->data = data;
                        temp->LST = NULL;
                        temp->RST = NULL;
                        trv->LST = temp;
                        break;
                    }
                    else{
                        trv = trv->LST;
                    }
                }
            }
        }
    }
    bool find(T data){
        Node<T> *temp = root;
        while(temp){
            if(temp->data == data){
                return true;
            }
            else if(temp->data > data){
                temp = temp->LST;
            }else{
                temp = temp->RST;
            }
        }
    }



    void show(){
        Node<T> *temp = root;
        bool flg = false;
        while(temp){
            std::cout<<temp->data<<std::endl;

            if(!flg){
                temp = temp->LST;
                flg = true;
            }else{
                temp = temp->RST;
            }
        }
   }
};

int main()
{
    BST<int> sr;
    sr.add(5);
    for(int i=0;i<10;i++){
        if(i==5){
            continue;
        }else{
            sr.add(i);
        }
    }
    //sr.show();

    std::cout<<sr.find(7)<<std::endl;



    return 0;
}
