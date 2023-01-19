#include <iostream>
#include "Node.h"

using namespace std;

Node::Node(){
  value = NULL;
  next = NULL;
}
Node::Node(Student * student){
  value = student;
}
Node::~Node(){
  delete &value;
  next = NULL;
}

//Sets the value of the node to a student
void Node::setValue(Student* newVal){
  value = newVal;
}

//Returns the value of a student found in a node
Student* Node::getValue(){
  return value;
}

//Sets the next node
void Node::setNext(Node* newNext){
  next = newNext;
}

//Returns the next node (end of list if NULL)
Node* Node::getNext(){
  return next;
}
