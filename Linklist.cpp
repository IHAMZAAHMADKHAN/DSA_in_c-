#include<iostream>
using namespace std;

struct Node{
	int data;
	Node* next;
	
};

Node* head=NULL;
void add_start(int value){
	Node* newNode= new Node;
	
	newNode->data=value;
	newNode->next=head;
	head=newNode;
}


void add_last(int value) {
    Node* newNode = new Node; // Create a new node
    newNode->data = value;    // Set its data
    newNode->next = NULL;  // Set its next pointer to nullptr

    if (head == NULL) {    // If the list is empty
        head = newNode;       // Make newNode the first node
    } else {                  // Otherwise, find the last node
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode; // Link the last node to newNode
    }
}

void print(){
	cout<<"Data element in single link list are : ";
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp= temp->next;
	}
}
int main(){
add_start(3);
add_start(4);
add_start(5);
add_start(4);

print();

return 0;

}

