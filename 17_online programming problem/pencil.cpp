
#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  for (int test = 0; test < t; test++) {
    int a, b, c, d, k;
    cin >> a >> b >> c >> d >> k;
    int ans = (a + c - 1) / c + (b + d - 1) / d;
    if (ans <= k) {
      cout << (a + c - 1) / c << ' ' << (b + d - 1) / d << '\n';
    }
  else {
      cout << "-1\n";
    }
  }
}
