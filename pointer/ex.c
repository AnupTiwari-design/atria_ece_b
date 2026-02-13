#include<stdio.h>

int main(){
    int a=4;
    printf("%d \n",&a);

    int b=10;
    printf("%d \n",&b);

    int *p=&b;
    printf("%d \n",p);
     printf("%d \n",*p);
}