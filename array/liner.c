#include<stdio.h>
int main(){

    int arr[]={1,2,3,4,5,10};
    int key;
    printf("enter the elment to search");
    scanf("%d",&key);
    for(int i=0;i<6;i++){
        if(arr[i]==key){
            printf("%d",i+1);
            return 0;

        }
    }
    printf("not found");
}