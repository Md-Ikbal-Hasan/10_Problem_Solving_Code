#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,k,d=0,cnt=0;
    long long int l,u,i,j,tmp;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%lld %lld",&l,&u);
        if(l>u)
            swap(l,u);
        for(j=l;j<=u;j++) {
            long long int x = sqrt(j);
            for(i=1;i<=x;i++) {
                if(j%i==0)
                    cnt+=2;
            }
            if(x * x == j)
                cnt-- ;
            if(cnt>d) {
                d=cnt;
                tmp=j;
            }
            cnt=0;
        }
        printf("Between %lld and %lld, %lld has a maximum of %d divisors\n",l,u,tmp,d);
    }

    return 0;
}
