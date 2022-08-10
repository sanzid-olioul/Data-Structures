#include<iostream>
void swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
void insertion_sort(int arr[],int sz){
    for(int i=1;i<sz;i++){
        int j = i-1;
        int temp = arr[i];
        while(j>=0 && temp < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

void bubble_sort(int arr[],int sz){
    for(int i=1;i<sz;i++){
        for(int j=0;j<sz-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void selection_sort(int arr[],int sz){
    for(int i=0;i<sz;i++){
        int min = i;
        for(int j=i+1;j<sz;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }
}

int main(){
    int arr[]={5,9,4,2,5,7,89,6,45,8,2,1,0,2,8,99,8258,455,987,35,47,2,364,942};
    int sz=24;
    // std::cin>>sz;
    // for(int i=0;i<sz;i++){
    //     std::cin>>arr[i];
    // }
    bubble_sort(arr,sz);
    std::cout<<std::endl;
    for(int i=0;i<sz;i++){
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}