#include<iostream>
using namespace std;

int maximum(int a[])
{
    int max=a[0],i;
    for(i=0; i<5; i++)

        if (a[i] > max)
            max = a[i];

        return max;

}

int minimum(int a[])
{
    int min=a[0],i;
    for(i=0; i<5; i++)

        if (a[i]<min)
        min = a[i];

        return min;
}

int main()
{
    int x[5],i;
    cout<<"Enter 5 integer:"<<endl;
    for(i=0; i<5; i++)
    {
        cin>>x[i];
    }
    maximum(x);
    minimum(x);
    cout<<"Maximum is: "<<maximum(x)<<endl;
    cout<<"Minimum is: "<<minimum(x)<<endl;
    return 0;
}


