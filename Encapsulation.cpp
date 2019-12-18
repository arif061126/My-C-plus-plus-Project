#include<iostream>
#include<conio.h>
#include<string>

using namespace std;

class Student
{
private:
    string name;
public:
    void setName(string x)
    {
        name=x;
    }
    string getName()
    {
        return name;
    }

};

int main()
{
    Student s1;
    s1.setName("Arif Ahmed");
    cout<<s1.getName()<<endl;


    getch();
}
