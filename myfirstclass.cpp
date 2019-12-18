#include "myfirstclass.h"
#include<iostream>

using namespace std;

MyFirstClass::MyFirstClass()
{
    cout<<"Constructor is created"<<endl;
}

MyFirstClass::~MyFirstClass()
{
    cout<<"Destructor is created"<<endl;
}
void MyFirstClass::display()
{
    cout<<"Display"<<endl;
}
