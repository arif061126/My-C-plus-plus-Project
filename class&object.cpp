#include<iostream>
#include<conio.h>

using namespace std;

class Student
{
public:
    int id;
    double gpa;
};


int main()
{
    Student Alim, Asif;

    Alim.id=101;
    Alim.gpa=4.50;

    Asif.id=102;
    Asif.gpa=4.80;

    cout<<Alim.id<<endl;
    cout<<Alim.gpa<<endl;

    cout<<Asif.id<<endl;
    cout<<Asif.gpa<<endl;




    getch();
}
