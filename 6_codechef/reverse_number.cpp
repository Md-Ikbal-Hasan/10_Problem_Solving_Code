#include <iostream>
using namespace std;

int reversed_number(int n){
	int rev_num = 0;
	while(n != 0 ){
		int reminder = n % 10;
		rev_num = rev_num*10 + reminder;
		n = n/10;
	}

	return rev_num;

}

int main() {
	int t;
	cin>>t;
	while(t--){
		int x;
		cin>>x;
		cout<<reversed_number(x)<<endl;
	}
	

	return 0;
}