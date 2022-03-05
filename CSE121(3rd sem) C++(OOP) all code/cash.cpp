#include<iostream>
#include<iomanip>
using namespace std;
int main()

{

         int p1,p2,p3,p4,total;

        cout<<setfill('_');


        cout<<setw(20)<<setiosflags(ios::left)<<"Product name:";
        cout<<"price"<<endl;

        cout<<setw(20)<<setiosflags(ios::left)<<"shirt:";
        cin>>p1;
        cout<<setw(20)<<setiosflags(ios::left)<<"pant:";
        cin>>p2;
         cout<<setw(20)<<setiosflags(ios::left)<<"Belt:";
        cin>>p3;
         cout<<setw(20)<<setiosflags(ios::left)<<"Sunglass:";
        cin>>p4;
        total=p1+p2+p3+p4;
          cout<<setw(20)<<setiosflags(ios::left)<<"total:";
        cout<<total;

        return 0;
}
