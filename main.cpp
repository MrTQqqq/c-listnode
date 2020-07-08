#include <iostream>
#include "ListForward.h"


int main()
{
	ListForward mynode;
	
	mynode.addHead(100);
	mynode.addAtTail(200);
	mynode.addAtIndex(1, 300);

	std::cout << mynode.get(1) << std::endl;

	mynode.deleteAtIndex(1);
	std::cout << mynode.get(1) << std::endl;


	return 0;
}