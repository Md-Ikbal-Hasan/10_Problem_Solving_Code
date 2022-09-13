#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int last_digit = arr[n - 1] % 10;
    if (last_digit == 0)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}