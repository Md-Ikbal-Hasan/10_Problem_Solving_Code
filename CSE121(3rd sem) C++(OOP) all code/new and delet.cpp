#include<iostream>
using namespace std;
class samp{
int i,j;
public:
    void set_data(int x,int y)
    {
        i=x;
        j=y;
    }
    int get_data()
    {
        return i*j;
    }

};
int main()
{
    samp *p;
    int i,j;

    p= new samp[10];
    if(!p)
    {
        cout<<"error"<<endl;
        return 1;
    }
    for(i=0;i<10;i++)
        p[i].set_data(i,i);
    for(i=0;i<10;i++){
        cout<<p[i].get_data()<<endl;
    }
    delete[]p;
    return 0;
}

