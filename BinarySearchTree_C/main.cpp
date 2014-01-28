#include "binary_search_tree.hpp"

int main()
{
	BinarySearchTree tree;
	tree.insertElement(5);
	tree.insertElement(7);
	tree.insertElement(2);
	std::cout << tree.searchElement(2) << std::endl;
	tree.print();
	return 0;
};
