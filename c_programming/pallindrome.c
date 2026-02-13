#include<stdio.h>
int main()
{
    printf("enter the no=");
    int n,reverse=0;
    scanf("%d",&n);
    int temp=n;
    while(n!=0){
    int d=n%10;
    reverse=reverse*10+d;
    n=n/10;
    }
    if (temp==reverse){
    printf(" pallindrome no %d",reverse);
}
    else{
    printf("not pallindrome");
}
return 0;
}
