#include<stdio.h>
#include<string.h>
union Student
{
     char name[100];
    int rollno;
    float marks;
};
int main(){

    union Student s;
    s.rollno=100;
    printf("rollno %d. \n ",s.rollno);

    s.marks=12;

      printf("marks %f.  \n",s.marks);

      strcpy(s.name,"Anup");

           printf("marks%f. ",s.marks);



}