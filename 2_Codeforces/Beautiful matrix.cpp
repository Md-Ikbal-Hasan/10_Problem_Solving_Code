#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6][6],p,q,i,j,mov=0;
    for(i=1;i<=5;i++)
     {
        for(j=1;j<=5;j++)
        {
            scanf("%d",&arr[i][j]);
        }
     }


//to find where is 1
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
        if(arr[i][j]==1)
            {
                p=i;
                q=j;
                break;
            }
        }
    }
    //to calculate movement

    if(p==1 || p==5)
    {
        mov=mov+2;
        if(q==3)
        {

        }
        if(q==1 || q==5)
            mov=mov+2;
        else if(q==2 || q==4)
            mov++;
    }

    else if(p==2 || p==4)
    {
        mov=mov+1;
        if(q==3)
        {

        }
        if(q==1 || q==5)
            mov=mov+2;
        else if(q==2 || q==4)
            mov++;
    }

    else if(p==3)
    {
        mov=mov+0;
        if(q==3)
        {

        }
        if(q==1 || q==5)
            mov=mov+2;
        else if(q==2 || q==4)
            mov++;
    }

    printf("%d\n",mov);



 return 0;
}

