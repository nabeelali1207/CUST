#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node *nextPtr;
};
class linkedList
{
	Node *headPtr;
public:
	linkedList()
	{
		headPtr = NULL;
	}

};