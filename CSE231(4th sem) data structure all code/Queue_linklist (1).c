#include<stdio.h>
#include<stdlib.h>
typedef struct Node Node;
struct Node {
	int n;
	Node* next;
};

 Node *front = '\0';
 Node *rear = '\0';

void Enqueue(int x) {
    Node *temp =(Node*)malloc(sizeof( Node));
	temp->n =x;
	temp->next ='\0';
	if(front == '\0' && rear == '\0'){
		front = rear = temp;
		return -1;
	}
	else {
    rear->next = temp;
	rear = temp;
	}
}

// To Dequeue an integer.
void Dequeue() {
	struct Node* temp = front;
	if(front =='\0' ) {
		printf("Queue is Empty\n");
		return;
	}
	if(front == rear) {
		front = rear = '\0';
	}
	else {
		front = front->next;
	}
	free(temp);
}

void Print() {
	Node *temp = front;
	while(temp != '\0') {
		printf("%d ",temp->n);
		temp = temp->next;
	}
	printf("\n");
}

int main(){
	Enqueue(2);
	Enqueue(4);
	Enqueue(6);
	Enqueue(8);
    Print();
	Dequeue();
	Dequeue();
    Print();
}
