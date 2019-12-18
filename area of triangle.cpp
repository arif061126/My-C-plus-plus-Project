#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int base, height;

    cout<<"Enter the base of triangle: ";
    cin>>base;
    cout<<"Enter the height of triangle: ";
    cin>>height;

    //double area=1/2*base*height; //output=0
    //cout<<"The area of triangle is: "<<area;

    double area=1.0/2*base*height;
    cout<<"The area of triangle is: "<<area<<endl;

    double area1=(double)1/2*base*height;
    cout<<"The area of triangle is: "<<area1<<endl;

    double area2=0.5*base*height;
    cout<<"The area of triangle is: "<<area2;

    getch();
}
