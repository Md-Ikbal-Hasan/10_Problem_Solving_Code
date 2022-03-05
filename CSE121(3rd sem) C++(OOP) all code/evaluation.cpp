#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
         string s1,s2,s3,s4,s5;
         int i,s,ps,cs;
         float cgpa;

        cout<<setfill('_');


        cout<<setw(20)<<setiosflags(ios::left)<<"District:";
        cin>>s2;
        cout<<setw(20)<<setiosflags(ios::left)<<"University:";
        cin>>s3;
        cout<<setw(20)<<setiosflags(ios::left)<<"Department:";
        cin>>s4;
         cout<<setw(20)<<setiosflags(ios::left)<<"Intake:";
        cin>>i;
         cout<<setw(20)<<setiosflags(ios::left)<<"Section:";
        cin>>s;
         cout<<setw(20)<<setiosflags(ios::left)<<"Passed semester:";
        cin>>ps;
         cout<<setw(20)<<setiosflags(ios::left)<<"Current semester:";
        cin>>cs;
         cout<<setw(20)<<setiosflags(ios::left)<<"CGPA:";
        cin>>cgpa;
         cout<<setw(20)<<setiosflags(ios::left)<<"comment:";
        cin>>s5;
   cout<<setw(20)<<setiosflags(ios::right)<<"Name:";
        cin>>s1;
        return 0;


}


