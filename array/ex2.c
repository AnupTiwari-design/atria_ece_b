#include<stdio.h>
int main(){

    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pos=2,key=8;
    arr[n+1];

    for(int i=n-1;i>pos-1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=key;
    for(int i=0;i<n+1;i++){
        printf("%d",arr[i]);
    }
}