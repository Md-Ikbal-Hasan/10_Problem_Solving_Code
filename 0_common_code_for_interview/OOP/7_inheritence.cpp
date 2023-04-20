#include <bits/stdc++.h>
using namespace std;
class GrandPa
{
private:
    int totalAsset = 10000000;

public:
    void myGrandPa()
    {
        cout << "Some content in my GrandPa function" << endl;
    }
};

class Father : public GrandPa
{
public:
    void myFather()
    {
        cout << "some content in myFather class" << endl;
    }
};

class Child : public Father
{
public:
    void myChild()
    {
        cout << "some content in my Child class"
             << "\n";
    }
};

int main()
{
    Child myObject;
    myObject.myChild();
    myObject.myFather();
    myObject.myGrandPa();
}