
#include<stdio.h>
int main()
{
 float marks;
 printf("Enter your marks :");
 scanf("%f",&marks);
 if(marks>=80 )
 {
    printf("A+\n");
 }
 if(marks>=70 && marks<80)
 {
    printf("A\n");
 }
 if(marks>=60 && marks<70)
 {
    printf("A-\n");
 }
 if(marks<60)
 {
    printf("fail\n");
 }

}




