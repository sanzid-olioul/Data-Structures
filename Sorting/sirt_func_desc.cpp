#include<iostream>
#include<algorithm>
bool comp(int x,int y){
    return x > y;
}

void sort_fnc(int arr[],int sz){
    std::sort(arr,arr+sz,comp);
}
int main(){
    int arr[]={5,9,4,2,5,7,89,6,45,8,2,1,0,2,8,99,8258,455,987,35,47,2,364,942};
    int sz=24;
    // std::cin>>sz;
    // for(int i=0;i<sz;i++){
    //     std::cin>>arr[i];
    // }
    sort_fnc(arr,sz);
    std::cout<<std::endl;
    for(int i=0;i<sz;i++){
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}