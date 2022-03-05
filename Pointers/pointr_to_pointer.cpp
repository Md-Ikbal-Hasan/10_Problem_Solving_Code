#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 5;
    int *p = &x;
    *p = 6;
    int **q = &p;
    int*** r = &q;
    cout<<*p<<endl;
    cout<<"address of x Is : "<<&x <<endl;
    cout<<*q<<endl;
    cout<< *(*q) <<endl;
    cout<< *r1;<<endl;





    return 0;
}
