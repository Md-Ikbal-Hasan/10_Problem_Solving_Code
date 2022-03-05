#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,A[100],B[100],i,j,sum=0,k;
    scanf("%d",&a);

    for(i=0;i<a;i++)
        {
        scanf("%d",&A[i]);
    }

    scanf("%d",&b);
    for( i=0;i<b;i++) {
        scanf("%d",&B[i]);
    }
    int flag ;
    int x , y ;
    for( i = 0 ;  i < a ; i++) {
        for( j = 0 ; j < b ; j++) {
            sum = A[i] + B[j] ;
            flag = 1 ;
            x = A[i] ;
            y = B[j] ;
            for( k = 0 ; k < a ; k++) {
                if(sum == A[k]) {
                    flag = 0 ;
                    break;
                }
            }
            for( k = 0 ; k < b ; k++) {
                if(sum == B[k]) {
                    flag = 0 ;
                    break;
                }
            }
            if(flag == 1)
            {
                cout << x << " " << y << "\n" ;
                return 0 ;
            }
        }
    }


    return 0;
}
