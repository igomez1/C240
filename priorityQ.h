#ifndef PRIORITYQ_H
#define PRIORITYQ_H
#include "Call.h"
class priorityQ {
	public:
	priorityQ();
	~priorityQ();
	int getLength();
	bool isEmpty();
	bool enqueue(int pos, Call element);
	bool dequeue();
	Call front();
	private:
	class node{
		public:
			Call data;
			node *next;
	};
	node *head ;
	node *tail;
	int size;
};


#endif
