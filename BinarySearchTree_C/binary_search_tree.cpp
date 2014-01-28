#include "binary_search_tree.hpp"

BinarySearchTree::BinarySearchTree()
{
	root = NULL;
};

bool BinarySearchTree::isEmpty()
{
	return root == NULL;
};

void BinarySearchTree::print()
{
	print(root);
}

void BinarySearchTree::print(node* at)
{
	if (at != NULL) 
	{	
		print(at->left);
		std::cout << at->value << std::endl;
		print(at->right);
	}
}

void BinarySearchTree::insertElement(int value)
{
	insertElement(value, root);
};

void BinarySearchTree::insertElement(int v, node* &at)
{
	if (at == NULL) 
	{
		at = new node(v);
	} 
	else
	{
		if (v > at->value) 
			insertElement(v, at->right);
		else
			insertElement(v, at->left);
	} 
}

bool BinarySearchTree::searchElement(int value)
{
	return searchElement(value, root);
};

bool BinarySearchTree::searchElement(int v, node* at)
{
	if (at == NULL) 
	{
		return false;
	} 
	else if (at->value == v) 
	{
		return true;
	}
	else
	{
		if (v > at->value) 
			return searchElement(v, at->right);
		else
			return searchElement(v, at->left);
	} 
}
