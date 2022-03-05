#include<stdio.h>
struct stud
{
char name[100],blood_group[10];
int roll;

};
int main()
{
    int i;
   struct stud a[3];
   for(i=0;i<3;i++)
   {
       printf("%d.Enter the name: ",i+1);
       scanf("%s",&a[i].name);
        printf("Enter the roll: ");
       scanf("%d",&a[i].roll);
        printf("Enter the blood group: ");
       scanf("%s",&a[i].blood_group);

   }
   printf("Entered information is:\n");
    for(i=0;i<3;i++)
   {
       printf("\n%d.name: %s",i+1,a[i].name);
        printf("\nroll: %d",a[i].roll);
        printf("\nblood group: %s",a[i].blood_group);
printf("\n");
   }
    return 0;
}


