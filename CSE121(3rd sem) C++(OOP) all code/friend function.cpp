#include <iostream>
using namespace std;
class square
{
    int length;

public:
    square(int x)
    {
        length = x;
    }
    ~square()
    {
        cout << "destructing" << endl;
    }
    void show()
    {
        cout << length << endl;
    }
    friend void update(square *ob);
};

void update(square *ob)
{
    cin >> ob->length;
}

int main()
{
    square ob1(100);
    cout << "before update" << endl;
    ob1.show();
    update(&ob1);
    ob1.show();
    return 0;
}
