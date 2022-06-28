#include<bits/stdc++.h>
using namespace std;

void func(int a[]){
	a[0] = 44; a[1] = 55 ; a[2] = 66;
	cout<<a[0]<<" "<<a[1]<<" "<<a[1]<<endl;
}
int main(){


    int arr[5];
    arr[0] = 11; arr[1] = 22 ; arr[2] = 33;
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[1]<<endl;
    func(arr);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[1]<<endl;



	return 0;
}