#include<iostream>
void swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}
void heapify(int arr[],int n,int i){
    int min = i;
    int left_child = 2*i+1;
    int right_cile = 2*i+2;
    if(left_child<n && arr[i]>arr[left_child]){
        min = left_child;
    }
    if(right_cile <n && arr[min]>arr[right_cile]){
        min = right_cile;
    }
    if(min!=i){
        swap(arr[min],arr[i]);
        heapify(arr,n,min);
    }
}

void heap_sort(int arr[],int sz){
    for(int i=sz/2;i>=0;i--){
        heapify(arr,sz,i);
    }
    for(int i = sz-1;i>=1;i--){
        swap(arr[0],arr[sz-1]);
        sz--;
        heapify(arr,sz,0);
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
    heap_sort(arr,sz);
    std::cout<<std::endl;
    for(int i=0;i<sz;i++){
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}