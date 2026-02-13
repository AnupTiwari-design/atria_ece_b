#include<stdio.h>

int main(){

    int n;
    printf("enter length of array =");
    scanf("%d",&n);
    int arr[n];

    printf("enter array elemts\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter sub_array length \n");
    int k;
    scanf("%d",&k);

    int sum=0;
    for(int i=0;i<k;i++){
        sum=sum+arr[i];
    }
    int max_sum=sum;
    for(int i=k;i<n;i++){
        sum=sum+arr[i]-arr[i-k];
        if(sum>max_sum){
            max_sum=sum;
        }
        
    }
    printf("%d",max_sum);



}