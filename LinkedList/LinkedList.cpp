
#include <iostream>

using namespace std;

class LinkedNode {
public:
	LinkedNode(int value = 0, LinkedNode* next = 0);
	LinkedNode* GetNextNode();
	void Insert(LinkedNode* node);
	void Delete(LinkedNode* headNode, LinkedNode* currNode, LinkedNode* tailNode, LinkedNode* prevNode);
	void Print();
	int dataVal;
	LinkedNode* nextNodePtr;
};

// Constructor
LinkedNode::LinkedNode(int value, LinkedNode* next) {
	this->dataVal = value;
	this->nextNodePtr = next;

	return;
}


void LinkedNode::Insert(LinkedNode* node) {
	LinkedNode* tmpNext = 0;

	tmpNext = this->nextNodePtr;   
	this->nextNodePtr = node;    
	node->nextNodePtr = tmpNext;

	return;
}

void LinkedNode::Delete(LinkedNode* headNode, LinkedNode* checkNode, LinkedNode* tailNode, LinkedNode* prevNode) {
		

		//if (checkNode == headNode) {
			//checkNode = checkNode->nextNodePtr;
			//delete headNode;
			//headNode = checkNode->nextNodePtr;
		//}
		 if (checkNode == tailNode) { // Deletes the last element
			prevNode->nextNodePtr = 0;
			delete tailNode;
			tailNode = prevNode;
			cout << "Deleted last element " << endl;
		}
		//else if {
			//prevNode->nextNodePtr = currNode->nextNodePtr;
			//delete currNode;
			//cout << "delete not the first or last element" << endl;
		//}
		//prevNode = currNode;
}

void LinkedNode::Print() {
	cout << this->dataVal << endl;
	return;
}

// Grab location pointed by nextNodePtr
LinkedNode* LinkedNode::GetNextNode() {
	return this->nextNodePtr;
}

int main() {
	LinkedNode* headNode = 0;
	LinkedNode* currNode = 0;
	LinkedNode* tailNode = 0;
	LinkedNode* prevNode = 0;
	LinkedNode* checkNode = 0;

	int i = 0;

	// adds values to list
	for (i = 0; i < 10; i++) {

		if (i == 0) {
			headNode = new LinkedNode(i);
			tailNode = headNode;
			prevNode = headNode;
		}
		else {
			currNode = new LinkedNode(i);

			tailNode->Insert(currNode);
			tailNode = currNode;

			if (i != 9) {
				prevNode = currNode;
			}
		}
	}
	checkNode = headNode;
	//Deletes values in list
	for (int x = 0; x < 10; x++) {
		checkNode->Delete(headNode, checkNode, tailNode, prevNode);
		checkNode = checkNode->GetNextNode();
	}

	currNode = headNode; // Print the list
	while (currNode != 0) {
		currNode->Print();
		currNode = currNode->GetNextNode();
	}

	return 0;
}

