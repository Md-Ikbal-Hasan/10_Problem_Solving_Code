// C++ program for insertion in a single linked list at a specified position
#include <iostream>
using namespace std;

// A linked list Node
struct Node {
	int data;
	struct Node* next;
};

// Size of linked list
int size = 0;

// function to create and return a Node
Node* getNode(int data)
{
	// allocating space
	Node* newNode = new Node();

	// inserting the required data
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

// function to insert a Node at required postion
void insertPos(Node** current, int pos, int data)
{
	// This condition to check whether the
	// postion given is valid or not.
	if (pos < 1 || pos > size + 1)
		cout << "Invalid postion!" << endl;
	else {

		// Keep looping until the pos is zero
		while (pos--) {

			if (pos == 0) {

				// adding Node at required postion
				Node* temp = getNode(data);

				// Making the new Node to point to
				// the old Node at the same position
				temp->next = *current;

				// Changing the pointer of the Node previous
				// to the old Node to point to the new Node
				*current = temp;
			}
			else
			// Assign double pointer variable to point to the
			// pointer pointing to the address of next Node
			current = &(*current)->next;
		}
		size++;
	}
}

// This function prints contents
// of the linked list
void printList(struct Node* head)
{
	while (head != NULL) {
		cout << " " << head->data;
		head = head->next;
	}
	cout << endl;
}

// Driver Code
int main()
{
	// Creating the list 3->5->8->10
	Node* head = NULL;
	head = getNode(3);
	head->next = getNode(5);
	head->next->next = getNode(8);
	head->next->next->next = getNode(10);
	head->next->next->next->next = getNode(12);


	size = 5;

	cout << "Linked list before insertion: ";
	printList(head);

	int data , pos;
	cout<<"Enter the data and position for insert: ";
	cin>>data>>pos;
	insertPos(&head, pos, data);
	cout << "Linked list after insertion: ";
	printList(head);

	return 0;
}


