#include <iostream>
#include "Node.h"


using namespace std;

int main(){
  Student* billy = new Student();
  billy->setStudent('a');

  Node* first = new Node();
  first->setValue(billy);

  cout << first->getValue()->getStudent() << endl;

 

  
  return 0;
}



