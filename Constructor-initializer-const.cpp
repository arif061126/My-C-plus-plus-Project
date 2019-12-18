#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
public:
    const int admissionFee=1500;
    Student(int x)
    {
        //admissionFee=x;
        cout<<admissionFee<<endl;
    }
};




int main()
{
    Student s1(1);



    getch();
}
