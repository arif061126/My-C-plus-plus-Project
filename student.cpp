#include "student.h"
#include<iostream>

using namespace std;

Student::Student(int x,double y)
{
    id=x;
    gpa=y;
}
void Student::Display()
{
    cout<<id<<" "<<gpa<<endl;
}
