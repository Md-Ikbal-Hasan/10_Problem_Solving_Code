#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int *p;
    p = &a;
    a = 5;
    cout<<(p)<<endl; //address of a
    cout<<&a<<endl; //address of a
    cout<<&p<<endl;  //address of p itself
    cout<<*p<<endl;   // value of address that p is pointed. means value of a = 5
    *p = 8;            // the value of address that p holds  is now updated
    cout<<a<<endl;     // a is updated . a = 8
    cout<<*p<<endl;    // *p = 8
    int b = 20;
    *p = b;           // the value of b is stored in the address of p( p holds the address of a)
    cout<<p<<endl;     // the address of a cause p hold the address of a
    cout<<*p<<endl;    // *p = 20
    cout<<a<<endl;    // a = 20
    cout<<(p+2)<<endl;
    cout<<*(p+2)<<endl; //gervage value



    return 0;
}
