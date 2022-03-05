#include<iostream>
using namespace std;
class area
{
int length;
int width;
public:
    int x(int l, int b)
    {
        int Area;
        Area=l*b;
        cout<<"area of triangle= "<<Area;
    }

};
int main()
{
  int l,b;
  area r;
  cin>>l;
  cin>>b;
  r.x(l,b);
  return 0;
}
