#include<iostream>
#include<stdio.h>
#include<queue>
#include<stack>
using namespace std;
int main()
{
     /*stack<int> s;
     s.push(10);
     s.push(20);
     s.push(30);
     s.push(40);
     s.push(50);

     cout<<s.size()<<endl;
     cout<<s.top()<<endl;
     s.pop();
     cout<<s.top()<<endl;
     s.pop();
     s.pop();
     */

     queue<int > myq;
     myq.push(2);
     myq.push(4);
     myq.push(6);
     myq.push(8);
     cout<<myq.front()<<endl;
     cout<<myq.back()<<endl;


    return 0;
}
