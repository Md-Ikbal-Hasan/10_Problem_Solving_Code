#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *link; //self referential structure
};

void add_at_end(struct node *head, int data)
{
   struct node *ptr, *temp;
   ptr = head;
   temp = (struct node*)malloc(sizeof(struct node));gf

   temp->data = data;
   temp->link = NULL;

   while(ptr->link != NULL)
      ptr = ptr->link;

   ptr->link = temp; 
}

void print_data(struct node *head)
{
   if(head == NULL)
      cout<<"Linked list is empty";
   struct node *ptr = NULL;
   ptr = head;
   while(ptr != NULL)
   {
      cout<<ptr->data<<endl;
      ptr = ptr->link;
   }
}


int main()
{
   struct node *head = (struct node*)malloc(sizeof(struct node));
   head->data = 45;
   head->link = NULL;

   struct node *current = (struct node*)malloc(sizeof(struct node));
   current->data = 98;
   current->link = NULL;
   head->link = current;

   current = (struct node*)malloc(sizeof(struct node));
   current->data = 3;
   current->link = NULL;

   head->link->link = current;

   //cout<<head->data<<" "<<head->link->data<<" "<<head->link->link->data;
   int data = 67;
   add_at_end(head,data);
   print_data(head);

  
   
	return 0;
}