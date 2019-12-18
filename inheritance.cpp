#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class Person
{
public:
    string name;
    int age;
    void display1()
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
class Student:public Person
{
public:
    int id;
    void display2()
    {
        display1();
        cout<<id<<endl;

    }
};



int main()
{
    Person p1;
    p1.name="Arif";
    p1.age=28;
    p1.display1();
    Student s1;
    s1.name="Asif";
    s1.age=25;
    s1.id=101;
    s1.display2();


    getch();
}

