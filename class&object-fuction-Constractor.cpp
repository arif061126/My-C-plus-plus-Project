#include<iostream>
#include<conio.h>

using namespace std;

class Student
{
public:
    int id;
    double gpa;

    void display()
    {
        cout<<id<<" "<<gpa<<endl;
    }
    Student(int x,double y)
    {
        id=x;
        gpa=y;
    }

};


int main()
{
    Student Alim(101,4.50), Asif(102,4.80), Alif(103,4.90);


    Alim.display();


    Alif.display();


    Asif.display();



    getch();
}


