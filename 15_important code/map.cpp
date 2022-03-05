#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int ,string > mp;
    mp[1] = "Iqbal";
    mp[2] = "Sunny";
    mp[3] = "Faisal";
    mp[4] = "Titu";

    cout<<mp[1]<<endl;
    cout<<"size of map: "<<mp.size()<<endl;

    for(auto it : mp)
    {
    cout << it.first << " " << it.second << "\n" ;
    }

    mp.clear();
    cout<<"size of map: "<<mp.size()<<endl;
    mp.insert( pair <int, string> (5,"Aminul") );
    mp.insert( pair <int, string> (6,"Hasan") );

    cout<<"size of map: "<<mp.size()<<endl;
    cout<<mp[5]<<endl;
    mp.erase(6);

    return 0;
}
