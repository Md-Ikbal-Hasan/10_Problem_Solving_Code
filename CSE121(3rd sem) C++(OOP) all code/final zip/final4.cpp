#include <iostream>
using namespace std;
class table{
float length, width,legs;
public:
table(float i= 0,float j = 0,float k=0) { length = i; width = j; legs=k;}
void getxy(float &i,float &j ,float &k) { i= length; j = width; k=legs;}
table operator + (table ob2);
table operator - (table ob2);
table operator * (table ob2);
table operator / (table ob2);
};
table table:: operator + (table ob2){
table temp;
temp.length= length + ob2.length;
temp.width= width;
temp.legs= legs + ob2.legs;
return temp;
}
table table:: operator - (table ob2){
table temp;
temp.length= length - ob2.length;
temp.width= width;
temp.legs= legs - ob2.legs;
return temp;
}
table table:: operator * (table ob2){
table temp;
temp.length= length * ob2.length;
temp.width= width;
temp.legs= legs * ob2.legs;
return temp;
}
table table:: operator / (table ob2){
table temp;
temp.length= length / ob2.length;
temp.width= width;
temp.legs= legs / ob2.legs;
return temp;
}
int main(){
table o1(10,5,4), o2(8,5,4), o3;
float x,y,z;
o3 = o1 + o2;
o3.getxy(x,y,z);
cout<< "(o1+o2)length:" << x << ", (o1+o2)width:"<<y<<", (o1+o2)legs:"<<z<<endl;
o3 = o1 - o2;
o3.getxy(x,y,z);
cout<< "(o1-o2)length:" << x << ", (o1-o2)width:"<<y<<", (o1-o2)legs:"<<z<<endl;
o3 = o1 * o2;
o3.getxy(x,y,z);
cout<< "(o1*o2)length:" << x << ", (o1*o2)width:"<<y<<", (o1*o2)legs:"<<z<<endl;
o3 = o1 / o2;
o3.getxy(x,y,z);
cout<< "(o1/o2)length:" << x << ", (o1/o2)width:"<<y<<", (o1/o2)legs:"<<z<<endl;
return 0;
}
