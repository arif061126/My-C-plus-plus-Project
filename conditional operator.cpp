#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    double num1, num2, num3, max;

    cout<<"Enter three numbers: ";
    cin>>num1>>num2>>num3;

    max=num1>num2?num1:num2;

    max=num2>num1?num2:num1;

    max=num3>num2?num3:num2;

    max=num2>num3?num2:num3;

    max=num1>num3?num1:num3;

    max=num3>num1?num3:num1;


    cout<<"The maximum number is: "<<max;

    getch();
}

