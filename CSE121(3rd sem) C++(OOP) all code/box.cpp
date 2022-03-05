#include<iostream>
using namespace std;
class box
{
    int length,height,width;
public:
    box(int x,int y,int z){
    length=x;
    height=y;
    width=z;
    cout<<"constructing"<<" "<<endl;

    }
    void show()
    {
        cout<<length<<" "<<height<<" "<<width<<endl;
    }
    void volume()
    {
          int result=length*height*width;
        cout<<"volume is:"<<result<<endl;
    }
};
int main()
{   int i;
    box client_1[5]={box(3,2,1),box(2,3,1),box(7,8,5),box(6,4,5),box(9,6,2)};
    for(i=0;i<5;i++)
    {
        client_1[i].show();
        client_1[i].volume();

    }

    return 0;
}

