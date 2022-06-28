
// Example : g++ -std=c++14 practice.cpp  && a.exe

#include<bits/stdc++.h>
using namespace std;
int main()
{
	string number[] = {"zero" ,"one","two","three","four","five","six","seven","eight","nine","ten"};
	// for(int i=0;i<=10;i++){
	// 	cout<<number[i]<<endl;
	// }

	int a ,b ; 
	cin>> a >>b;
	if(a>b) {swap(a,b); }



	if(a<=9 && b<=9){
		for(int i = a; i<=b; i++){
			cout<<number[i]<<endl;
		}
	}
	
	else if(a<=9 && b>9){
		for(int i=a; i<=9; i++){
			cout<<number[i]<<endl;
		}

		for(int i=10; i<=b; i++){
			if(i%2==0) { cout<<"even"<<endl; }
			else { cout<<"odd"<<endl; }
		}
	}

	else if (a>9 && b>9){
		for(int i=a; i<=b; i++){
			if(i%2==0) { cout<<"even"<<endl; }
			else { cout<<"odd"<<endl; }
		}

	}


	

	
	return 0;
}