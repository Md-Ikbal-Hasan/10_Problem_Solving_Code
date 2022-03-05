#include<bits/stdc++.h>
using namespace std;
class Queue
{
private:
	int front , rear , arr[5];
public:
	Queue()
	{
		front = -1 ,rear = -1;
		for(int i=0; i<5; i++)
		{
			arr[i] = 0;
		}
	}
	bool isEmpty()
	{
		if(front == -1 && rear == -1)
			return true;
		else
			return false;
	}
	bool isFull()
	{
		if(rear = 4)
			return true;
		else
			return false;
	}

	void Enqueue(int value)
	{
		if(isFull())
		{
			cout<<"Queue overflow"<<endl;
			return;
		}
		else if(isEmpty())
		{
			front = 0, rear = 0;
			arr[rear] = value;
		}
		else
		{
			rear++;
			arr[rear] = value;
		}
	}
	int Dequeue()
	{
		if(isEmpty())
		{
			cout<<"Queue is already empty."<<endl;
			return 0;
		}
		else if(front == rear)
		{
			int temp = arr[front] ;
			arr[front] = 0;
			front = rear  = -1;
			return temp;

		}
		else
		{
			int temp = arr[front] ;
			arr[front] = 0;
			front++;
			return temp;

		}
	}

	int Count()
	{
		if(rear==-1 && front==-1)
			return 0;
		else
		return (rear-front+1);
	}
	void Display()
	{
		for(int i = 0; i<=4; i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
};

int main()
{
	Queue q1;
	int option , value;
	do
	{
		cout<<"What option do you want to perform? Select option number ."<<endl;
		cout<<"0. for exit"<<endl;
		cout<<"1. Enqueue()"<<endl;
		cout<<"2. Dequeue()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. count()"<<endl;
		cout<<"6. display()"<<endl;
		cout<<"7. clear screen. "<<endl<<endl;

		cin>> option;
		switch(option)
		{
			case 0:
				break;
			case 1:
				cout<<"For enqueue , enter  a value:";
				cin>>value;
				q1.Enqueue(value);
				break;
			case 2:
				cout<<"Value Dequeued. ";
				q1.Dequeue();
				break;
			case 3:
				if(q1.isEmpty())
					cout<<"queue is empty."<<endl;
				else
					cout<<"Queue is not empty"<<endl;
				break;
			case 4:
				if(q1.isFull())
					cout<<"Queue is full."<<endl;
				else
					cout<<"Queue is not full"<<endl;
				break;
			case 5:
				cout<<"Total value of queue is "<<q1.Count()<<endl;
				break;
			case 6:
				cout<<"display function called - ";
				q1.Display();
				break;
			case 7:
				system("cls");
				break;
			default:
				cout<<"Enter valid option. Try again. "<<endl;
				break;

		}


	}while(option  != 0);



	return 0;
}