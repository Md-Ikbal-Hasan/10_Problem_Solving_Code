#include<iostream>
 #include <iomanip>﻿
using namespace std;
int main()
{
   cout<<"50"<<endl;
   cout<<"600"<<endl;
   cout<<"raisul islam"<<endl;
   cout<<"jannnat"<<endl;

   cout<<setfill('.');
   cout<<setw(15)<<"Raisa"<<endl;
   cout<<setw(15)<<"jannnatul"<<endl;

   cout<<setfill('.');
   cout<<setw(10)<<50<<endl;
   cout<<setw(10)<<500<<endl;

   cout<<setw(10)<<5000<<endl;

    cout<<setbase(8)<<65<<endl;
      cout<<setbase(16)<<65<<endl;
      cout<<setbase(10)<<0101<<endl;
        cout<<setbase(10)<<0x41<<endl;

        cout<<setw(15)<<setiosflags(ios::left)<<"pen";
        cout<<"10"<<endl;
        cout<<setw(15)<<setiosflags(ios::left)<<"table";
        cout<<"900"<<endl;

        cout<<setiosflags(ios::showpoint)<<22/7<<endl;

         cout<<setiosflags(ios::showpos)<<100<<endl;
         cout<<setiosflags(ios::showpos)<<-100<<endl;

          cout<<setiosflags(ios::scientific)<<314766.5677<<endl;


    return 0;
}
