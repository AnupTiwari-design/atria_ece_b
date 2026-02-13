#include<stdio.h>

int main(){
    printf("enter a value");
    int n;
    scanf("%d",&n);
    if((n&1)==0){
        printf("even no");
    }
    else{
        printf("odd no");
    }
}