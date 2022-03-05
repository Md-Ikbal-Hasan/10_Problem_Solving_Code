#include<iostream>
using namespace std;
class myclass {
int a;
public:
    myclass(int x)
    {
        a=x;
    }
int get()
{
    return a;
}
void update(int s)
{

 cin>>s;
    a=s;
}
};
int main(){
myclass ob(180);
cout<<"value before update:"<<ob.get()<<endl;

ob.update(56);
cout<<"after update: "<<ob.get();
return 0;
}
