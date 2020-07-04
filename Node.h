#ifndef NODE_H
#define NODE_H
#include "Object.h"

class Node//: public Object
{
	public:
		Node();
		void setNext(Node*);
		Node* getNext();
		void setData(Object*);
		
		~Node();
	protected:
		
	private:
		Node* next_node;
		Object* data;
		
			
};

#endif
