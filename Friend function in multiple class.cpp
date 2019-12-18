#include<iostream>
using namespace std;

class Employee;
class Boss{
private:
    int salary,age;
public:
    Boss()
    {

    }
    Boss(int a, int b)
    {
        age=a;
        salary=b;
    }
    ~Boss()
    {

    }
    void display();
    friend void total_age(Boss,Employee);
    friend void total_salary(Boss,Employee);
};
void Boss::display()
{
    cout<<"The age of Boss = "<<age<<endl;
    cout<<"The salary of Boss = "<<salary<<endl;
}
class Employee{
private:
    int salary, age;
public:
    Employee()
    {

    }
    Employee(int x, int y)
    {
        age=x;
        salary=y;
    }
    ~Employee()
    {

    }
    void display();
    friend void total_age(Boss,Employee);
    friend void total_salary(Boss,Employee);
};

void Employee::display()
{
    cout<<"The age of Employee = "<<age<<endl;
    cout<<"The salary of Employee = "<<salary<<endl;
}
void total_age(Boss b,Employee e)
{
    int total_age=b.age+e.age;
    cout<<"Total age = "<<total_age<<endl;
}
void total_salary(Boss b,Employee e)
{
    int total_salary=b.salary+e.salary;
    cout<<"Total salary = "<<total_salary;
}
int main()
{
    Boss b1(50,5000);
    b1.display();
    Employee e1(20,2000);
    e1.display();
    total_age(b1,e1);
    total_salary(b1,e1);

    return 0;
}
