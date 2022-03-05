#include <iostream>
using namespace std;
int main()
{
    int y;
    cin >> y;
    while (1)
    {
        y = y+1;
        /*find out 4 digit of the number and store in
        a,b,c,d like 2173 a=2,b=1,c=7,d=3*/
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << y << endl;
    return 0;
}
