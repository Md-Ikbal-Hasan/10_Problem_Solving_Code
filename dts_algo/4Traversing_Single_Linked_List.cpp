//Traversing single linked list
#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *link; //self referential structure
};

void count_of_nodes(struct node *head)
{
   int count  = 0;
   if(head == NULL)
      cout<<"Linked list is empty";
   struct node *ptr = NULL;
   ptr = head;
   while(ptr != NULL)
   {
      //cout<<ptr->data<<endl; //we can also print the data here
      count++;
      ptr = ptr->link;
   }
   cout<<"Number of nodes in linked list : "<<count<<endl;

}

//this is for print the data
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

   current = (struct node*)malloc(sizeof(struct node));
   current->data = 37;
   current->link = NULL;
   head->link->link->link = current;

   cout<<head->data<<" "<<head->link->data<<" "<<head->link->link->data<<" "<<head->link->link->link->data<<endl;

   count_of_nodes(head);
   print_data(head);


  
   
	return 0;
}