#include<stdio.h>
struct student
{
    int id;
    float cgpa;
};
int main()
{
    struct student a;
    printf("Enter the id: ");
    scanf("%d",&a.id);
     printf("Enter the cgpa: ");
    scanf("%f",&a.cgpa);
    printf("id:%d\n cgpa:%.3f",a.id,a.cgpa);
    return 0;

    }
