#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	string ch = "567";
	int nm = ch[0] - '0';
	cout<<"char to number: "<<nm<<endl;
	char chr = nm + '0';
	cout<<"num to char : "<<chr<<endl;
	
	return 0;
}