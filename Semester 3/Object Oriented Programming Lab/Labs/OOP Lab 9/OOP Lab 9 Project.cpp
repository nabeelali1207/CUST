//Activity 1
#include <iostream>
using namespace std;
struct Node
{
	int value;
	Node *nextptr;
};
class linkedList
{
	int length;
	Node *headptr, *lastptr;
public:
	linkedList()
	{
		length = 0;
		headptr = NULL;
		lastptr = NULL;
	}
	void insertNode(int val)
	{
		if (headptr == NULL)
		{
			headptr = new Node;
			headptr->value = val;
			headptr->nextptr = NULL;
			lastptr = headptr;
			length++;
		}
		else
		{
			Node *temp = new Node;
			temp->nextptr = lastptr->nextptr;
			temp->value = val;
			length++;
			cout << temp->value;
		}

	}
	Node* searchNode(int val)
	{
		Node *temp1 = headptr;
		Node *temp2;
		if (headptr == NULL)
		{
			return NULL;
		}
		else
		{
			for (int i = 1; i <= length; i++)
			{
				temp2 = temp1->nextptr;
				if (val == temp2->value)
				{
					cout << "Node found...\n";
					return temp2;
				}
				temp1 = temp2;
			}
		}
	}
};
void main()
{
	linkedList temp;
	Node *t;
	int data;
	cout << "Enter value: ";
	cin >> data;
	temp.insertNode(1);
	temp.insertNode(2);
	temp.insertNode(data);
}
