#include<iostream>
using namespace std;

class Deque 
{
private:
	class node
	{
		public:
			int value;
			node* next;
			node(int v, node* n = NULL) 
			{
				value = v;
				next = n;
			}
	};

	node* head;
	node* tail;
	
public:
	Deque();
	~Deque();
	bool isEmpty();
	void print();
	void insertElement(int value, bool from_head);
	void deleteElement(bool from_head);
	int getElement(bool from_head);
};
