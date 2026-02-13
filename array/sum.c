#include<stdio.h>

int main(){

    int arr[]={1,2,3,4,5};
    int sum=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){

        sum=sum+arr[i];

    }
    printf("%d",sum);
    return 0;
}