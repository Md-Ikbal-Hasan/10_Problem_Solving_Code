#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

int size = 0;

Node* getNode(int data)
{

	Node* newNode = new Node();

	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void insertPos(Node** current, int pos, int data)
{
	if (pos < 1 || pos > size + 1)
		cout << "Invalid postion!" << endl;
	else
	{
		while (pos--)
        {
			if (pos == 0)
            {
				Node* temp = getNode(data);

				temp->next = *current;

				*current = temp;
			}
			else
			current = &(*current)->next;
		}
		size++;
	}
}
void printlist(struct Node* head)
{
    while(head!=NULL)
    {
    cout<<" "<<head->data;
    head= head->next;
    }
    cout<<endl;

}
int main()
{
    Node* head= NULL;
    head=getNode(3);
    head->next=getNode(5);
    head->next->next=getNode(8);
    head->next->next->next=getNode(10);

     size=4;
    int data,pos;
    cout<<"Linked list before insertion :";
    printlist(head);
    cout<<"Enter the data and position for insert:";
    cin>>data>>pos;
    insertPos(&head,pos,data);
    cout<<"Linked list before insertion :";
    printlist(head);
    return 0;


}
