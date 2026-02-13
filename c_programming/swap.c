#include<stdio.h>

int main(){
    printf("Enter the value of a and b");
    int a,b;
    scanf("%d%d",&a,&b);

    a=a^b;
    b=a^b;
    a=a^b;
    printf("value after swapping \n");
    printf("a=%d. b=%d",a,b);
}