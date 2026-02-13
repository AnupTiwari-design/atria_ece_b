#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            sum=sum+arr[i];
        }

    }
    printf("sum of even no=%d",sum);
}