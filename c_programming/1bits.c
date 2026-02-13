#include<stdio.h>

int main(){
    printf("enter a no");
    int n;
    scanf("%d",&n);
    int count=0;

    while(n!=0){
        if((n&1)){
            count++;
        }
        n=n>>1;
    }
    printf("%d",count);
}