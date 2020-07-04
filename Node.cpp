#include "Node.h"

Node::Node()
{
}
void Node::setNext(Node*n_node){
	next_node=n_node;
}
Node* Node::getNext(){
	return next_node;		
}
void Node::setData(Object*obj){
	data=obj;
}
Node::~Node()
{
}
