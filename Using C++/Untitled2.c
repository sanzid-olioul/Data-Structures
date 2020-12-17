if(!root->LST){
                if(root->data < data){
                    Node<T> temp = new Node<T>;
                    temp->data = data;
                    temp->LST = NULL;
                    temp->RST = NULL;
                    root->RST = temp;
                }
            }
            if(!root->RST){
                if(root->data > data){
                    Node<T> temp = new Node<T>;
                    temp->data = data;
                    temp->LST = NULL;
                    temp->RST = NULL;
                    root->LST = temp;
                }
            }
