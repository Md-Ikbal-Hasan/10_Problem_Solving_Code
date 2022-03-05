#include <iostream>
using namespace std;
string a;
string b = "hello";
int j = 0, word = 0;
int main() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == b[j]) {
            j++;
            word++;
            
            if (word == 5) {
                break;
            }
        }
    }
    if (word == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}