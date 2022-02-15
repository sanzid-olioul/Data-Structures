#include<iostream>
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void bubble_short(int arr[],int sz){
    for(int i=0;i<sz;i++){
        for(int j=0;j<sz-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[] = {25,5,68,8,45,26,1,14,2,96,10,6,77};
    bubble_short(arr,12);
    for(int i=0;i<13;i++){
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}