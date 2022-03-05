#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(3);
    vec.push_back(7);
    vec.push_back(4);
    vec.push_back(9);
    vec.push_back(6);

    cout<<"Vector:";
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }


    cout<<endl<<"Vector:";
    vec.insert(vec.begin(),2);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }


    cout<<endl<<"Vector:";
    vec.insert(vec.begin()+4,20);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }


    cout<<endl<<"Vector:";
    vec.erase(vec.begin()+2);
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }

     cout<<endl<<"print specified index: "<<vec.at(3)<<" "<<vec[3];

     cout<<endl<<vec.empty();

     if(vec.empty())
     {
         cout<<endl<<"is empty";
     }
     else
        cout<<endl<<"not empty";



     vec.clear();
     if(vec.empty())
     {
         cout<<endl<<"is empty";
     }
     else
        cout<<endl<<"not empty";


    vec.push_back(3);
    vec.push_back(7);
    vec.push_back(4);
    vec.push_back(9);
    vec.push_back(6);
    vec.push_back(5);
    cout<<endl<<"Vector:";
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }

    cout<<endl<<vec.front();
    cout<<endl<<vec.back();

    vector<char> v;
    v.push_back('a');
    v.push_back('b');
    cout<<endl<<"Character Vector:";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
