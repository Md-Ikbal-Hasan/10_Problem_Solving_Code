#include <iostream>
using namespace std;
class coord{
int x, y;
public:
coord(int i= 0, int j = 0) { x = i; y = j;}
//void getxy(int &i, int &j) { i= x; j = y;}
void show(){cout<<x<<" "<<y<<endl;}
coord operator ++();
coord operator ++(int a);
};
coord coord:: operator ++ (){
++x;
++y;
return *this;
}
coord coord:: operator ++ (int notused){
x++;
y++;
return *this;
}
int main(){
coord o1(6, 20),ob2;
cout<<"before incremant:"<<endl;
o1.show();
++o1;
cout<<"aftar incremant:"<<endl;
o1.show();
//ob2.show();
cout<<"before incremant:"<<endl;
o1.show();
o1++;
cout<<"aftar incremant:"<<endl;
o1.show();
//ob2.show();
return 0;
}
