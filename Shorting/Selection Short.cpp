#include<iostream>
void swap(int *a,int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
void selection_short(int arr[],int sz){
    for(int i=0;i<sz;i++){
        int min = i;
        for(int j=i+1;j<=sz;j++){
            if(arr[min]> arr[j]){
                min = j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
}

int main()
{
    int arr[] = {25,5,68,8,45,26,1,14,2,96,10,6,77};
    selection_short(arr,12);
    for(int i=0;i<13;i++){
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}