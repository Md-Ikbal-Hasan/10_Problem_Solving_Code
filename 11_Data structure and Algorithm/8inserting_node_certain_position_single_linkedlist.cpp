#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *link;
};

struct node* add_at_end(struct node *ptr, int data)
{
	struct node  *temp= NULL;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    ptr->link = temp;
    return temp;
}

void add_at_pos(struct node *head, int data, int pos)
{
	struct node *ptr = head;
	struct node  *ptr2 = (struct node*)malloc(sizeof(struct node));

	/*if(pos == 1)
	{
		ptr->data = data;
		ptr->link = NULL;

		ptr->link = head;
		head = ptr;
		//return head;
	}*/

	ptr2->data = data;
	ptr2->link = NULL;

	pos--;
	while(pos != 1) // dont understand this logic.........its not work for position 1
	{
		ptr = ptr->link;
		pos--;
	}
	ptr2->link = ptr->link;
	ptr->link = ptr2;

}


int main()
{

	struct node  *head = NULL;
	head = (struct node*)malloc(sizeof(struct node)); 
	head->data = 45;
	head->link = NULL;

	struct node *ptr = head;
	ptr = add_at_end(ptr, 85);
	ptr = add_at_end(ptr, 3);
	ptr = add_at_end(ptr, 67);
	ptr = add_at_end(ptr, 12);
	ptr = add_at_end(ptr, 8);

	int data = 115 , position = 4;
	add_at_pos(head,data,position);

	ptr = head;
	while(ptr != NULL)
	{
		cout<<ptr->data <<" ";
		ptr = ptr->link;
	}


	return 0;

}
