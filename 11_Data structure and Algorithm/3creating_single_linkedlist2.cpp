#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *link; //self referential structure
};
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

  cout<<head->data<<" "<<head->link->data<<" "<<head->link->link->data;

  
   
	return 0;
}