#include<iostream>
void swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}
int partition(int arr[], int start, int end){
    int pivot = arr[start];
    int count = 0;
    for (int i = start + 1; i <= end; i++) {
        if (arr[i] <= pivot)
            count++;
    }
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);
    int i = start, j = end;
    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
void quick_sort(int arr[],int l,int r){
    if(l <r){
        int part = partition(arr,l,r);
        quick_sort(arr,l,part-1);
        quick_sort(arr,part+1,r);
    }
}
int main()
{
    int arr[]={5,9,4,2,5,7,89,6,45,8,2,1,0,2,8,99,8258,455,987,35,47,2,364,942};
    int sz=24;
    // std::cin>>sz;
    // for(int i=0;i<sz;i++){
    //     std::cin>>arr[i];
    // }
    quick_sort(arr,0,sz-1);
    std::cout<<std::endl;
    for(int i=0;i<sz;i++){
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}