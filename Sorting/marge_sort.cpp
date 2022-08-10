#include<iostream>
void marge(int arr[],int l,int m,int r){
    int n1 = m - l +1;
    int n2 = r-m;
    int arr1[n1],arr2[n2];
    int i,j,k;
    for(i = 0;i<n1;i++){
        arr1[i]= arr[l+i];
    }
    for(j=0;j<n2;j++){
        arr2[j] = arr[m+1+j];
    }

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2){
        if (arr1[i] <= arr2[j]){
            arr[k] = arr1[i];
            i++;
        }else{
            arr[k] = arr2[j];
            j++;
        }

        k++;
    }
    while (i < n1){
        arr[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n2){
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void marge_sort(int arr[],int l,int r){
    if(l<r){
        int m = l + (r-l)/2;
        marge_sort(arr,l,m);
        marge_sort(arr,m+1,r);
        marge(arr,l,m,r);
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
    marge_sort(arr,0,sz);
    std::cout<<std::endl;
    for(int i=0;i<sz;i++){
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}