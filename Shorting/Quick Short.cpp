#include<iostream>
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[],int low,int high){
    int piv = arr[high];
    int i = low -1;
    for(int j= low;j<high;j++){
        if(arr[j] < piv){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return i+1;
}
void quick_short(int arr[],int low,int high){
    if(low<high){
        int pi = partition(arr,low,high);
        quick_short(arr,low,pi-1);
        quick_short(arr,pi+1,high);
    }
}

int main()
{
    int arr[] = {25,5,68,8,45,26,1,14,2,96,10,6,77};
    quick_short(arr,0,12);
    for(int i=0;i<13;i++){
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}