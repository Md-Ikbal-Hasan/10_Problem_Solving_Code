#include<bits/stdc++.h>
using namespace std;

class Stack
{

public:
    int siz;
    int arr[5];
    Stack()
    {
        siz = -1;
        for(int i = 0; i<5; i++)
            {
                arr[i] = 0;
            }
    }
    bool isEmpty()
    {
        if(siz== -1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if(siz==4)
            return true;
        else
            return false;
    }
    void Push(int val)
    {
        if(isFull())
        {
            cout<<"stack overflow"<<endl;
        }
        else
        {
            siz++;
            arr[siz] = val;

        }
    }

    int Pop()
    {
        if(isEmpty())
        {
            cout<<"satck underflow"<<endl;
        }
        else
        {
            int popvalue = arr[siz];
            arr[siz] = 0;
            siz--;
            return popvalue;
        }
    }

    int Count()
    {
        return siz+1;
    }

    int Peek(int pos)
    {
        if(isEmpty())
        {
            cout<<"satck underflow"<<endl;
        }
        else
        {
            return arr[pos];
        }
    }

    void Change(int pos,int val)
    {
        arr[pos] = val;
        cout<<"value changed at location "<<pos<<endl;
    }
    void Display()
    {
        cout<<"All values in the stack are: ";
        for(int i=4; i>=0; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


};


int main()
{
    Stack s1;
    int pos,val,option;
    do
    {
        cout<<"What option do you want to perform? Select option number . Enter 0 for exit."<<endl;
        cout<<"1. push()"<<endl;
        cout<<"2. pop()"<<endl;
        cout<<"3. isEmpty()"<<endl;
        cout<<"4. isFull()"<<endl;
        cout<<"5. peek()"<<endl;
        cout<<"6. count()"<<endl;
        cout<<"7. change()"<<endl;
        cout<<"8. display()"<<endl;
        cout<<"9. clear screen"<<endl<<endl;

        cin>>option;

        switch(option)
        {
            case 0:
                break;

            case 1:
                cout<<"Enter an item to push in the stack"<<endl;
                cin>>val;
                s1.Push(val);
                break;

            case 2:
                cout<<"pop called. value poped."<<s1.Pop()<<endl;

            case 3:
                if(s1.isEmpty())
                    cout<<"stack is empty"<<endl;
                else
                    cout<<"stack is not empty"<<endl;
                break;

            case 4:
                if(s1.isFull())
                    cout<<"stack is Full"<<endl;
                else
                    cout<<"stack is not Full"<<endl;
                break;

            case 5:
                cout<<"Enter the positon of item you want to peek: "<<endl;
                cin>>pos;
                cout<<"peek function is called - value at position"<<pos<<" : "<<s1.Peek(pos)<<endl;
                break;

            case 6:
                cout<<"Count function called. Number of items in the stack : "<<s1.Count()<<endl;
                break;

            case 7:
                cout<<"Enter the position you want to change:";
                cin>>pos;
                cout<<endl<<"Enter the value you want to change: ";
                cin>>val;
                s1.Change(pos, val);
                break;

            case 8:
                cout<<"display function called."<<endl;
                s1.Display();
                break;

            case 9:
                system("cls");
                break;

            default:
                cout<<"Enter proper option number. "<<endl;

        }

    }while(option != 0);



    return 0;
}