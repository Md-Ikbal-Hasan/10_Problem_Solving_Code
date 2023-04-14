#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        // int temp = arr[i];
        // arr[i] = arr[j];
        // arr[j] = temp;
        swap(arr[i], arr[j]);
    }

    cout << "Reversed array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
