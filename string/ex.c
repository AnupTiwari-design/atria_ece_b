#include<stdio.h>

int main(){
    char name[100];

    printf("Enter your name = ");
    //scanf("%s",name);

    fgets(name,100,stdin);

    printf("Hi  %s",name);

}