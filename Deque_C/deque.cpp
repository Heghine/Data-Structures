#include "deque.hpp"

Deque::Deque()
{
	head = NULL;
	tail = NULL;
};

Deque::~Deque()
{
	node* n;
	while (head != tail)
	{
		n = head;
		head = head->next;
		delete n;
	};
};

bool Deque::isEmpty()
{
	return head == NULL;
};

void Deque::print()
{
	node* n = head;
	while (n != tail)
	{
		std::cout << n->value << " ";
		n = n->next;
	};
	std::cout << n->value << std::endl;
};

void Deque::insertElement(int value, bool from_head)
{
	if (isEmpty()) 
	{
		head = tail = new node(value);
	} 
	else
	{
		if (from_head) {
			head = new node(value, head);
			//insertElement(value, from_head, head);
		}
		else
		{	
			tail->next = new node(value);
			tail = tail->next;
			//insertElement(value, from_head, tail);
		}
	}
};

void Deque::deleteElement(bool from_head)
{
	if (!isEmpty())
	{
		if (from_head)
		{
			node* n = head;		
			head = head->next;
			delete n;
		}
		else
		{	
			node* n = head;
			while (n->next != tail)
				n = n->next;
			delete tail;
			n->next = NULL;
			tail = n;
		}
	}
}; 

int Deque::getElement(bool from_head)
{
	if (!isEmpty())
	{
		if (from_head)
		{
			return head->value;
		}
		else
		{
			return tail->value;
		}
	}
	
	return -1;
};
