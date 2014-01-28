#include<iostream>
using namespace std;

class BinarySearchTree
{
private:
	class node
	{
		public:
			int value;
			node* left;
			node* right;
			node(int v, node* l = NULL, node* r = NULL) 
			{
				value = v;
				left = l;
				right = r;
			};
		
	};

	node* root;

	void print(node* at);
	void insertElement(int v, node* &at);
	bool searchElement(int v, node* at);
	void deleteElement(int v, node* &at);

public:
	BinarySearchTree();
	bool isEmpty();
	void print();
	void insertElement(int value);
	bool searchElement(int value);
	void deleteElement(int value);

};
