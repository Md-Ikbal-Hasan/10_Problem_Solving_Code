#include<bits/stdc++.h>
using namespace std;
bool ans = true;
int main()
{
    string str;
    cin>>str;
    int len = str.length();

    if(len==1)
    {
        if(str[0]>='a' && str[0]<='z')
            ans = true;
        else
            ans = false;
    }
    else
    {
        for(int i=0; i<len-1; i =+ 2)
        {
            if( (str[i]>='a' && str[i]<='z') && (str[i+1]>='A' && str[i+1]<='Z') )
            {
                ans = true;
            }
            else
            {
                ans = false;
                break;
            }

        }
        //length jodi odd number hoy tahole last index ar char ta chek korbo.
        //seta lower case hote hobe
        if(len %2 !=0)
        {
            if (str[len-1]>='a' && str[len-1]<='z')
                ans = true;
            else
                ans  = false;
        }
    }

    if (ans ==true)
        cout<<"Yes"<<endl;
    else if(ans == false)
        cout<<"No"<<endl;


    return 0;

}
