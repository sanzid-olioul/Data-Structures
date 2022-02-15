#include<iostream>
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void insertion_short(int arr[],int sz){
    for(int i=1;i<=sz;i++){
        int j = i-1;
        int key = arr[i];
        while (key < arr[j] && j >=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int arr[] = {25,5,68,8,45,26,1,14,2,96,10,6,77};
    insertion_short(arr,12);
    for(int i=0;i<13;i++){
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}