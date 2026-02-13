#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("enter the string");
    fgets(str,sizeof(str),stdin);

    int n=strlen(str);

    int l_space=0;
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            l_space=i;
        }
    }
    printf("%c.",str[0]);

    for(int i=1;i<l_space;i++){
        if(str[i]==' '){
            printf("%c.",str[i+1]);
        }
    }
    for(int i=l_space+1;i<n;i++){
        printf("%c",str[i]);
    }
}