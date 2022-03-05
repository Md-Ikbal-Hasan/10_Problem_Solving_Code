#include<iostream>
using namespace std;
template<class Y>
Y sum(Y a,Y b)
{
    return a+b;
}
int main()
{

cout<<"int sum="<<sum(3,6)<<endl;
cout<<"float sum="<<sum(6.1,3.4);
return 0;
}
