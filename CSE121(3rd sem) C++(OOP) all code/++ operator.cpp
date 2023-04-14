#include <iostream>
using namespace std;
class test
{
    int a;

public:
    test(int x)
    {
        a = x;
    }
    void operator++()
    {
        a++;
    }
    void operator--()
    {
        a--;
    }
    /* void show()
      {
          cout<<"a:"<<a<<endl;
      }*/
    void get(int &p)
    {
        p = a;
    }
};
int main()
{
    test t(20);
    ++t;
    int q;
    t.get(q);
    cout << q << endl;
    --t;
    t.get(q);
    cout << q;

    return 0;
}
