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
};


int main()
{
    Student Alim, Asif, Alif;

    Alim.id=101;
    Alim.gpa=4.50;
    Alim.display();

    Alif.id=103;
    Alif.gpa=3.50;
    Alif.display();

    Asif.id=102;
    Asif.gpa=4.80;
    Asif.display();



    getch();
}

