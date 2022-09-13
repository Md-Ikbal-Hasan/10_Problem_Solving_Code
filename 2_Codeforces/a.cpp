#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;

	int arr[n+1];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
    

    int count = 0;
    int i ,j,result = -1;
	for(i=0,j=0; i<n; i++){
		if(arr[i] % arr[j] ==0 ){
			count++;
			if(count== n){
				result = arr[j];
				break;
			}
		} 

		else if(arr[i] % arr[j] !=0 ){
			count = 0;
			i = 0;
			j++;
		} 
	}

	cout<<"result: "<<result<<endl;


	return 0;
}