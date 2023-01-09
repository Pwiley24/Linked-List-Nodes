#include <iostream>
#include "Student.h"

using namespace std;

Student::Student(){
  //Add what student values equal (should be nothing: NULL or equivalent)
  name = ' ';
}

char Student::getStudent(){
  return name;
}

void Student::setStudent(char letter){
  //NOT COMPLETE... Does nothing
  name = 'a';
}
