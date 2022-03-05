#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    try{
    if(b==0)throw b;
    cout<<"Division: "<<a/b<<endl;
    }
    catch(int i)
    {
        cout<<"Divided by: "<<i<<endl;
    }
    cout<<"Multiplication: "<<a*b<<endl;
    cout<<"Summation: "<<a+b<<endl;
    cout<<"Subtraction: "<<a-b<<endl;
    return 0;
}
