#include "deque.hpp"

int main()
{
	Deque dq;
	dq.insertElement(5, true);
	dq.insertElement(7, true);
	dq.insertElement(8, false);
	dq.insertElement(4, true);
	dq.print();

	dq.deleteElement(false);
	dq.print();
	std::cout << dq.getElement(true) << std::endl;

	return 0;
};
