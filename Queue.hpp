#pragma once

#include <iostream>
#include "Node.hpp"

using std::cin;
using std::cout;
using std::endl;

class Queue
{
public:
	Queue();
	~Queue();

	bool enqueue(const string& newPrintJob);
	// precondition: Queue must not be empty
	string dequeue();

	bool isEmpty();

private:
	void destroyQueue();

	Node* mpHead,
		* mpTail;
};