#include<iostream>
void insertion_sort(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (key > arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main(){
    int arr[]={5,9,4,2,5,7,89,6,45,8,2,1,0,2,8,99,8258,455,987,35,47,2,364,942};
    int sz=24;
    // std::cin>>sz;
    // for(int i=0;i<sz;i++){
    //     std::cin>>arr[i];
    // }
    insertion_sort(arr,sz);
    std::cout<<std::endl;
    for(int i=0;i<sz;i++){
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}