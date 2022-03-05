#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,j,c=0,tmp;
    int arr[1000],arr2[1000],sum[1005];
    char str[1000],str2[1000];

    scanf("%s",str);
    scanf("%s",str2);
   int len= strlen(str);

    for( j=0;j<len;j++)
    {
       arr[j] = str[j] -'0';
    }

    for( j=0;j<len;j++)
    {
       arr2[j] = str2[j] -'0';
    }


    for(i= len -1,j=0;  i>=0, j<len  ;   i--,j++)
    {

        tmp = arr[i] +arr2[i]+ c ;
        sum[j] = tmp% 10;
        c = tmp / 10;
    }

    if(c>0)
    {
        sum[len] = c;
    }

    for(j=len;j>=0;j--)
    {
        printf("%d",sum[j]);
    }
return 0;
}
