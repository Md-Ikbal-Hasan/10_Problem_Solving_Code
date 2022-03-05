#include <iostream>
using namespace std;
class samp {
int i;
public:
samp(int n);
~samp();
void seti(int n) { i = n;}
int geti() { return i; }
};
samp::samp(int n){
i= n;
cout << “Constructing…..\n”;
samp::~samp(){
cout << “Destructing…..\n”;
}
void sqr_it(samp o) {
o.seti(o.geti() * o.geti());
cout << “Copy: value of a:” << o.geti() << ‘\n’;
}
int main() {
samp a(10);
sqr_it(a);
cout << “Main: value of a:” << a.geti() << ‘\n’;
return 0;}
