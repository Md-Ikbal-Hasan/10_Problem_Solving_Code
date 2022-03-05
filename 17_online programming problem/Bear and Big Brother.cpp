#include<bits/stdc++.h>
using namespace std;
int cnt=0;
int weight(int a,int b)
{
    a=a*3;
    b=b*2;
    cnt++;
    if(a>b)
        return cnt;
    else
    weight(a,b);


}

int main()
{
    int a,b,yr;
    scanf("%d %d",&a,&b);
    yr= weight(a,b);
     printf("%d\n",yr);

    return 0;

}
