#include<iostream>
using namespace std;
class card{
string title,author;
int num_of_copies;
public:
    store(string a,string b,int n)
    {
        title=a;
        author=b;
        num_of_copies=n;
    }
    void show()
    {
        cout<<title<<endl<<author<<endl<<num_of_copies<<endl;
    }
};

int main()
{
    card ob1,ob2,ob3;
    ob1.store("tech yourself c++", "Herbert Schildt",3);
    ob1.show();



    return 0;
}


