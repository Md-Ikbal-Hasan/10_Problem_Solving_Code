#include<stdio.h>
int main()
{
    int basic,HR;
    printf("Enter The Basic Salary: ");
    scanf("%d",&basic);

    if(basic>=5000)
    HR=(basic*40)/100;
    else
        HR=(basic*50)/100;

    printf("Your House Rant is:%d",HR);
    return 0;

}
