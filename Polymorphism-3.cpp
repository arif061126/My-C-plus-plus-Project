#include<iostream>
#include<conio.h>
#include<string>

using namespace std;


class Triangle
{
public:
    double dim1,dim2;
    Triangle(double x,double y)
    {
        dim1=x;
        dim2=y;
    }
    double area()
    {
        return 0.5*dim1*dim2;
    }
    void display()
    {
        cout<<"Area: "<<area()<<endl;
    }
};
class Rectangle
{
public:
    double x1,y1;
    Rectangle(double a,double b)
    {
        x1=a;
        y1=b;
    }
    double area()
    {
        return x1*y1;
    }
    void display()
    {
        cout<<"Area: "<<area()<<endl;
    }
};



int main()
{
    Triangle t(10.24,20.58);
    Rectangle r(10,20);
    //s=&t;

    //s=&r;
    t.display();
    r.display();

    getch();
}

