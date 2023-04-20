#include <bits/stdc++.h>
using namespace std;

int reverseANumber(int n)
{
    int rev_num = 0;
    while (n != 0)
    {
        int reminder = n % 10; // last digit of the number
        rev_num = rev_num * 10 + reminder;
        n = n / 10;
    }
    return rev_num;
}

int main()
{
    cout << reverseANumber(34581);

    return 0;
}
