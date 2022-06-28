#include <iostream>
using namespace std;
int main() {
	int num;
	cin>>num;
	int arr[num+1];

	for(int i=0; i<num; i++){
		cin>>arr[i];
	}

	long long int product  =1;

	for(int i=0; i<num; i++){
		product = (product * arr[i]) % 1000000007;

	}
	cout<<product<<endl;



	return 0;
}