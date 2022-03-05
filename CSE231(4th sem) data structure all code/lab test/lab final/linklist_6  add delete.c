#include<stdio.h>
#include<stdlib.h>

typedef struct linklist
{
    int data;
    struct linklist *next;
} node;

void add_data(node *first,int data)
{
    while(first->next != NULL)
    {
        first = first->next;
    }
    first->next=(node*)malloc(sizeof(node));
    first->next->data = data;
    first->next->next=NULL;

}
void insert_data(node *first,int data)
{
    while(first->next != NULL)
    {
        first=first->next;
    }
    first->next=(node*)malloc(sizeof(node));
    first->next->data=data;
    first->next->next=NULL;
}
void delete_data(node *first, int data)
{
    while(first->next->data != data)
    {
        first=first->next;
    }
    first->next=first->next->next;
}
void display(node *first)
{
    while(first->next != NULL)
    {
        printf("%d ",first->next->data);

        first=first->next;
    }
    printf("\n");
}

int main()
{
    int n,choice;
    node *first=(node*)malloc(sizeof(node));
    first->next = NULL;

    for(int i=1; i<=5; i++)
    {
        add_data(first,i*i);
    }
    printf("Enter your choice : \n1. Insert\n2. Delete\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("Given data : ");
        display(first);
        printf("Enter a data to insert : \n");
        scanf("%d",&n);
        insert_data(first,n);
        printf("After inserting : ");
        display(first);
    }
    else
    {
        printf("Given data : ");
        display(first);
        printf("Enter a data to delete : \n");
        scanf("%d",&n);
        delete_data(first,n);
        printf("After deleting : ");
        display(first);
    }
    return 0;
}







