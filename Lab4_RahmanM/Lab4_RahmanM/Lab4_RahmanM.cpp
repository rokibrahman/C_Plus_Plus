#include <iostream>
using namespace std;


void showmessage(int n)
{
	if (n > 0)
	{
		cout << "Good day!" << endl;
		showmessage(n - 1);
	}

}

int main()
{
	showmessage(5);


	system("pause");
	return 0;
}





//
////*******************
////Step #1
////*******************
//void NumberList::deleteNode(double num)
//{
//	ListNode *nodePtr;       // To traverse the list
//	ListNode *previousNode;  // To point to the previous node
//
//	// If the list is empty, do nothing.
//	if (!head)
//		return;
//
//	// Determine if the first node is the one.
//	if (head->value == num)
//	{
//		nodePtr = head->next;
//		delete head;
//		head = nodePtr;
//	}
//	else
//	{
//		// Initialize nodePtr to head of list
//		nodePtr = head;
//
//		// Skip all nodes whose value member is 
//		// not equal to num.
//		while (nodePtr != nullptr && nodePtr->value != num)
//		{
//			previousNode = nodePtr;
//			nodePtr = nodePtr->next;
//		}
//
//		// If nodePtr is not at the end of the list, 
//		// link the previous node to the node after
//		// nodePtr, then delete nodePtr.
//		if (nodePtr)
//		{
//			previousNode->next = nodePtr->next;
//			delete nodePtr;
//		}
//	}
//}
////*******************************************************
////Step 2: Reverse a LinkedList							*
////*******************************************************
//template <class T>
//void LinkedList<T>::reversedLinkedList()
//{
//	if (head == NULL) return;
//
//	Node *prev = NULL, *current = NULL, *next = NULL;
//	current = head;
//	while (current != NULL){
//		next = current->next;
//		current->next = prev;
//		prev = current;
//		current = next;
//	}
//
//	head = prev;
//}
//
