#include <iostream>
using namespace std;
class coord{
int x, y;
public:
coord(int i= 0, int j = 0) { x = i; y = j;}
//void getxy(int &i, int &j) { i= x; j = y;}
void show(){ cout<< "x:" << x <<" ,y:"<<y <<endl;}
coord operator + (coord ob2);
coord operator + (int i);

};
coord coord :: operator + (coord ob2){
coord temp;
temp.x= x + ob2.x;
temp.y= y + ob2.y;
return temp;
}
coord coord:: operator + (int i){
coord temp;
temp.x= x + i;
temp.y= y + i;
return temp;
}
int main(){
coord o1(10, 20), o2(5, 15), o3;
//int x, y;
o3 = o1 + o2;
//o3.getxy(x,y);
o3.show();
o3=(o1 +100);
//o3.getxy(x,y);
o3.show();
return 0;
}
