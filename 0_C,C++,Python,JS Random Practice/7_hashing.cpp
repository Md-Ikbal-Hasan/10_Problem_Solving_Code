/*
Given an array of N integers. Given Q queries and in each queries a number X, print count of that number in array;

constraints
1 <= N <= 10^5
1 <= a[i] <= 10^7
1 <= Q <= 10^5

kono akta number array te kotobar ace seta ber kora
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 10;
int hsh[N];
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        hsh[a[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << hsh[x] << endl;
    }

    // Time complexity -> O(N) + O(Q) = O(N) = 2*10^5

    return 0;
}
