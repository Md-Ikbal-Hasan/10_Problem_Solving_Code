#include <iostream>
using namespace std;
class base {
int x, y;
public:
base(int n, int p){
x = n;
y = p;
cout << "Constructing base class\n";
}
~base(){
cout << "destructing base class\n";
}
void showxy(){
cout << x << ""  << y <<  '\n';
}
};

class derived: public base {
int i, j,k;
public:
derived(int n, int m, int p): base (n, p){
i = n;
j = m;
//k=p;
cout << "Constructing derived class\n";
}
~derived(){
cout << "destructing derived class\n";
}
void showij(){
cout << i << ""  << j <<endl<< k<< '\n';
}
};

int main(){
derived ob(10, 20, 30);
ob.showxy();
ob.showij();
return 0;
}
