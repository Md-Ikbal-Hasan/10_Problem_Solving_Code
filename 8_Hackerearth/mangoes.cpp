#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    //Reading input from STDIN
	if (num ==2 ){
		cout<<"NO"<<endl;
	}
	else if( num%2 == 0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
}