#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    // cout << 7 / 2 << "\n";
    // cout << 'c' + 1 << "\n";
    // cout << 7 / 2 * 3 << "\n"; // 9
    // cout << 3 * 7 / 2 << "\n"; // 10

    // Overflow
    int a = 100000;
    int b = 100000;
    long long int c = a * 1LL * b;
    cout << c;

    return 0;
}
