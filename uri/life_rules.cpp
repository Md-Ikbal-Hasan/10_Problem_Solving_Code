#include<bits/stdc++.h>
using namespace std;
#define MAX 100
//take a number and return the reverse number
int reverse_number(int number)
{
    int reverse_number=0,reminder;
    while(number!=0)
    {
        reminder = number % 10;
        reverse_number =  reverse_number*10 + reminder;
        number = number / 10;
    }
    return reverse_number;
}

//take a number and find the digit of that number
void print_digit(int number)
{
    int digit[MAX];
    int reminder,i=0;
    while(number != 0)
    {
        reminder = number % 10;
        digit[i] = reminder;
        i++;
        number = number / 10;
    }
    cout<<"The digit of the number: ";
    for(int j= i-1; j>-1 ; j--)
    {
        cout<<digit[j]<<" ";
    }
    cout<<endl;
}

int main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    print_digit(number);

    reverse_number(number);
    cout<<"Reverse number is : "<<reverse_number(number)<<endl;




    return 0;
}
