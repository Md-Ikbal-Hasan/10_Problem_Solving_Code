#include<iostream>
using namespace std;
class samp{
int a,b;
public:
    samp(int m,int n)
    {
        a=m;
        b=n;
    }
    void show()
    {
        cout<<"a: "<<a<<" "<<"b:"<<b<<endl;
    }
    int area()
    {
        return a*b;
    }
};
   int main()
   {
       int i;
       samp ob[5]={samp(1,2),samp(2,3),samp(4,5),samp(6,7),samp(8,9)};
       for(i=0;i<5;i++)
       {
           ob[i].show();
       }
       cout<<"area"<<endl;
         for(i=0;i<5;i++)
       {
          cout<<ob[i].area()<<endl;
       }
       return 0;

   }

