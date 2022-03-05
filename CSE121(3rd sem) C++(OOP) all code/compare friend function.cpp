#include<iostream>
using namespace std;
class sphere;
class box
{
    int length,height,width;
public:
    box(int x,int y,int z){
    length=x;
    height=y;
    width=z;
    }
    friend float compare(box client_1, sphere client_2);
};
class sphere{
int radious;
public:
    sphere(int r)
    {
        radious=r;
    }
    friend float compare(box client_1, sphere client_2);
};
float compare(box client_1, sphere client_2)
              {
                  float bvolume,svolume;
                  bvolume=client_1.length*client_1.height*client_1.width;
                  svolume=(4/3)*3.1416*client_2.radious*client_2.radious*client_2.radious;
                  return bvolume-svolume;

              }

   int main()
              {
                  box client_1(3,5,7);
                  sphere client_2(5);
                  cout<<"compare: "<<compare(client_1,client_2)<<endl;
                  if(compare(client_1, client_2)>0)
                  {
                      cout<<"box's volume is greater than sphere volume";
                  }
                  else if(  compare(client_1,client_2)<0   )
                  {
                       cout<<"sphere volume is greater than box volume";
                  }

                  return 0;
              }



