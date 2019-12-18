#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
public:
    const int admissionFee;
    const int examFee;
    int id;

    Student(int x, int y, int z)
    :admissionFee(x),examFee(y)
    {

        cout<<admissionFee<<endl;
        cout<<examFee<<endl;
        id=z;
        cout<<"ID: "<<z<<endl;
    }
};




int main()
{
    Student s1(1500,500,101);



    getch();
}

