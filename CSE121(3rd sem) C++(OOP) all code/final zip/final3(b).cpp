#include<iostream>
using namespace std;
class alpha{
public:
    alpha(int a,char b){
    cout<<"In alpha class"<<endl;
    }
};
class beta:public alpha{
public:
    beta(int a,char b):alpha(a,b){
    cout<<"In beta class"<<endl;
    }
};
class gamma:public beta{
public:
    gamma(int a,char b):beta(a,b){
    cout<<"In gamma class"<<endl;
    }
};
int main()
{
    gamma g(3,4.5);
    return 0;
}
