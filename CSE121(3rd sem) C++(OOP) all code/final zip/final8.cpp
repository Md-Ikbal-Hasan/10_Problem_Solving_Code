#include<iostream>
using namespace std;
class A{
int a,b;
public:
    A(int x,int y){
    a=x;
    b=y;
    }
 bool operator ==(A ob);
};
bool A :: operator ==(A ob){
return a==ob.a && b==ob.b;
}
int main()
{
    A o1(2,3),o2(2,3);
    if(o1==o2)
        cout<<"Same"<<endl;
    else
        cout<<"Notsame"<<endl;
    return 0;
}
