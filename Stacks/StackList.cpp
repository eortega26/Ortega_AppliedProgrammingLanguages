#include <iostream>

using namespace std;

class HeadNode {
public:

	HeadNode() { headPtr = 0; tailPtr = 0; currPtr = 0; };

	class Node {
	public:
		Node(int val) { element = val; next = 0; };
		Node *next;
		int element;
	};

	void deleteNode(int deleteItem);
	void insertNode(int val);
	void traverseNode();
	Node *headPtr;
	Node *tailPtr;
	Node *currPtr;
};

class StackManager {
public:

	class Node {
	public:
		Node(int val) { x = val; next = 0; };
		Node *next;
		int x;
	};

	void insert(int val);
	int pop();
	void traverse();

	Node *headPtr;
	Node *currPtr;
};


void HeadNode::traverseNode() {

	// Write a for loop to traverse and print out each element 
	Node* printPtr = headPtr;

	cout << endl;
	cout << " --Queue-- " << endl;

	for (printPtr = headPtr; printPtr != 0; printPtr = printPtr->next) {
		cout << printPtr->element << endl;
	}

};

void HeadNode::deleteNode(int deleteItem) {

	// Do deletions remember to take care of the three different possibilities , deletion from the top, from the middle and from the
	// last element
	int index = 0;
	int count = 0;
	Node *currPtr = headPtr;
	Node *newTail = headPtr;
	Node *prevNode = headPtr;

	// This counts and cycles to the 2nd to last node (8)
	while (index < 7) {

		newTail = newTail->next;
		index++;
	}

	// This is for the middle node deletion (3)
	while (count < 1) {

		prevNode = prevNode->next;
		count++;
	}



	for (currPtr = headPtr; currPtr != 0; currPtr = currPtr->next) {
		
		if (currPtr->element == deleteItem) {
			if (currPtr == headPtr) {
				// Item at the top
				headPtr = headPtr->next;
				cout << " Deleted the head element: " << deleteItem << endl;
			}
			else if (currPtr == tailPtr) {
				// Item at the end
				newTail->next = 0;
				tailPtr = newTail;
				cout << " Deleted the tail element: " << deleteItem << endl;
			}
			else {
				// Item inbetween
				prevNode->next = currPtr->next;
				tailPtr = prevNode;
				cout << " Deleted the middle element: " << deleteItem << endl;
			}
		}

	}

};

void HeadNode::insertNode(int val) {
	// Insert into the end of the node
	
	Node* newNode = new Node(val);
	if (headPtr == 0) {
		headPtr = newNode;
		tailPtr = newNode;
	}
	else {
		// Write code to insert at the end
		tailPtr->next = newNode;
		tailPtr = newNode;
	}

}

void StackManager::insert(int val) {

	Node* newNode = new Node(val);

	
	if (headPtr == 0) {
		headPtr = newNode;
		currPtr = headPtr;
	}
	else {
		currPtr = new Node(val); 
		currPtr->next = headPtr;
		headPtr = currPtr;
	}

}

void StackManager::traverse() {

	Node* print = headPtr;
	cout << endl;
	cout << " --Stack-- " << endl;

	while (print != 0) {

		cout << print->x << endl;
		print = print->next;
	}
}

int StackManager::pop() {

	cout << " Deleted element: " << headPtr->x << endl;

	headPtr = headPtr->next;

	return headPtr->x;
}


int main() {

	HeadNode *headNode = new HeadNode();
	for (int i = 0; i < 10; i++) {
		headNode->insertNode(i);

	}

	// delete the front node 
	headNode->deleteNode(0);

	// delete the last element in the node 
	headNode->deleteNode(9);

	// delete the middle element in the node 
	headNode->deleteNode(3);

	// Traverse Node
	headNode->traverseNode();


	// STACK OPERATIONS

	StackManager* stackManager = new StackManager();

	// Insert 10 elements
	for (int i = 0; i < 10; i++) {

		stackManager->insert(i);
	}

	// Pop off 3 elements
	stackManager->pop();
	stackManager->pop();
	stackManager->pop();

	// Print out all the elements of the stack
	stackManager->traverse();

}
