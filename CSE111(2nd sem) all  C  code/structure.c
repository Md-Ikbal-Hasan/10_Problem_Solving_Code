#include<stdio.h>
struct stud
{
    char name[50];
    int roll;
    char comment[50];

};

int main()
{
    struct stud a;
    a.roll=317;
    strcpy(a.name,"Iqbal");
    strcpy(a.comment,"Active");
    printf("Name of the student: %s\n",a.name);
     printf("roll of the student: %d\n",a.roll);
     printf("comment for the student: %s",a.comment);



}
