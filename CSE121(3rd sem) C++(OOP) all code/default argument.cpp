#include<iostream>
using namespace std;
void test (int a=0,int b=0)
{
    cout<<"a:"<<a<<" "<<"b:"<<b<<endl;
}
int main()
{
   test();
   test(10);
   test(0,20);
   test(30,50);


    return 0;
}

