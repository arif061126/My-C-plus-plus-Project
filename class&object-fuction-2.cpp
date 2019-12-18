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
    void value(int x, double y)
    {
        id=x;
        gpa=y;
    }

};


int main()
{
    Student Alim, Asif, Alif;

    Alim.value(101,4.50);
    Alim.display();

    Alif.value(102,4.80);
    Alif.display();

    Asif.value(103,4.90);
    Asif.display();



    getch();
}


