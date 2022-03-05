//Read a value upto 10^6 and print the divisor of those number
//divisor() , it's generate the divisor of 1 to 10^6
#include<bits/stdc++.h>
using namespace std;
#define mxn 1000000
vector<int>vec[mxn+5];
void divisor()
{
    for(int i=1; i<=mxn; i++)
    {
        for(int j=i; j<=mxn ; j=j+i)
        {
            vec[j].push_back(i);
        }
    }
}

int main()
{
    divisor();
    int n;
    while(cin>>n)
    {
        for(int i=0; i<vec[n].size(); i++)
        {
            cout<<vec[n][i]<<endl;
        }
    }
    return 0;
}
