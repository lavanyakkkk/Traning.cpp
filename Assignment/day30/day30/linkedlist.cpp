#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

struct Node* head = nullptr;

//create node
Node* createNode(int val) {
	Node* newNode = new Node();
	newNode->data = val;
	newNode->next = nullptr;
}

//insertatbegin
void* insertAtBegin(int val) {
	Node* newNode = new Node();
	newNode->next = head;
	head = newNode;
}

//insertatend
void* insertAtEnd() {
	Node* newNode = new Node(); 
	if (head == nullptr) {
		head = newNode;
	}
	else {
		Node* temp = head;
		while (temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = newNode;

	}
}


void specificPosition(int val, int pos) {
	if (pos == 1) {
		insertAtBegin(val);
		return;
	}
	else {
		Node* newNode = new Node();
		Node* temp = head;
		for (int i = 1;temp != nullptr && i < pos - 1;i++) {
			temp = temp -> next;
		}

	}

}

