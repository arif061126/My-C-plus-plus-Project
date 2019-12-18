#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class Person
{
public:
    virtual void display()
    {
        cout<<"I am a Person"<<endl;
    }
};
class Student:public Person
{
public:
    void display()
    {
        cout<<"I am a Student"<<endl;
    }
};
class Teacher:public Person
{
public:
    void display()
    {
        cout<<"I am a Teacher"<<endl;
    }
};



int main()
{
    Person *p;
    Student s;
    Teacher t;
    p=&s;
    //p.display();

    p->display();


    p=&t;
    p->display();


    getch();
}

