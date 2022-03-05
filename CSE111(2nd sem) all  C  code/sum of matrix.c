#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],sum[3][3],i,j;
    printf("Enter the element of first matrix :\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%d",a[i][j]);

     printf("Enter the element of second matrix :");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%d",b[i][j]);

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        sum[i][j]=a[i][j]+b[i][j];

         printf("sum of the two matrix:");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        scanf("%d",sum[i][j]);
        return 0;
}
