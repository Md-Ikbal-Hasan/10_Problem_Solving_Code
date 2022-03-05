#include <bits/stdc++.h>
using namespace std;
int n;
void find_index()
{
    int x,num;
    cin>>x;
    vector<int> vec;
    vector<int> vec2;

    for(int i=0; i<x; i++)
    {
        cin>>num;
        vec.push_back(num);
    }
    vec2 = vec;
    sort(vec2.begin(), vec2.end());
    int comp = vec2[1];
    for(int i=0; i<x; i++)
    {
        if(vec[i] != comp)
        {
            cout<<i+1<<endl;
        }
    }
}
int main()
{
    int x;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        find_index();
    }



    return 0;

}
