#include <iostream>
#include "Node.h"


using namespace std;

int main(){

  //Test the Nodes: 
  Student* billy = new Student();
  billy->setStudent('a');

  Student* bob = new Student();
  bob->setStudent('b');

  Node* first = new Node();
  first->setValue(billy);

  Node* second = new Node();
  second->setValue(bob);

  first->setNext(second);

  cout << "on first: " << first->getValue()->getStudent() << endl;
  cout << "On second: " << first->getNext()->getValue()->getStudent() << endl;
  //end test
 

  
  return 0;
}



