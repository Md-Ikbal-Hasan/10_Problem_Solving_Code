#include <iostream>
using namespace std;
class coord{
int x, y;
public:
coord(int i= 0, int j = 0) { x = i; y = j;}
void getxy(int &i, int &j) { i= x; j = y;}
void show(){cout<<x<<" "<<y<<endl;}
coord operator =(coord ob);
};
coord coord :: operator =(coord ob){
x=ob.x;
y=ob.y;
}
int main(){
coord o1(5, 20),o2(10,15);
cout<<"before assign:"<<endl;
o1.show();
o2.show();
o1=o2;
cout<<"after assign:"<<endl;
o1.show();
o2.show();
return 0;
}
