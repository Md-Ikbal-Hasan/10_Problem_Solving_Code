#include<bits/stdc++.h>
using namespace std;
//for converting string to number....
int num(string s)
{
    int len= s.size();
    int ans=0;
    int arr[len+5];
    for(int i=0; i<len; i++)
    {
        ans=ans*10 +(s[i]-'0');
    }
    return ans;
}
//for prime factor.....
void prime_fact(int n)
{
    int sq= sqrt(n);
    vector<pair<int,int>>vec;
    int cnt=0;
    for(int i=2; i<=sq; i++) // edited i = 0 
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                n=n/i;
                cnt++;
            }
            vec.push_back(make_pair(i,cnt));
            cnt=0;
        }
    }
    if(n!=1)
    {
        vec.push_back(make_pair(n,1));
    }
    int len=vec.size();
    for(int i=len-1; i>0; i--) //edited
    {
        cout<<vec[i].first <<" " << vec[i].second << " " ; //edited cout << vec[i] << " " ;
    }
    cout << vec[0].first << " " << vec[0].second ; // edited for new line criterion..
    cout<<endl;
 
 
}
 
 
 
int main()
{
    int i,j,cnt=0;
    string str,s;
    vector<string> vec;
 
    while(getline(cin,str)) //edited ; 
    {
        int len= str.size();
        if(len==1 && str[0]=='0') 
        {
            break;
        }
        else
        {
            for(i=0; i<len; i++)
            {
                if(str[i]!=' ')
                {
                    s.push_back(str[i]);
                }
                else
                {
                    vec.push_back(s);
                    s.clear();
                }
 
            }
            vec.push_back(s);
            //converting string to number
            vector<int> number;
            for(i=0; i<vec.size(); i++)
            {
                number.push_back(num(vec[i]));
            }
 
            int len2= number.size();
            int n=1;
            for(i=0; i<len2; i=i+2 )  // edited i < len-1
            {
                n= n * pow(number[i],number[i+1]); // edited   n= n + pow(number[i],number[i+1]); 
            }
             n=n-1;
            prime_fact(n);
        }
        
        // added for vector clearing..
        
        vec.clear() ;
        s.clear() ; 
        str.clear() ;
        
    }
 
    return 0;
}