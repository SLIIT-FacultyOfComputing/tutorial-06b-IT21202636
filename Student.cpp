#include "Student.h"
#include <iostream>
#include<cstring>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int a, char b[]) {

  studentId = a;
  strcpy(name,b);
}

// Display StudentId and Name
void Student::display() {
  cout<<studentId<<endl<<name;
}
