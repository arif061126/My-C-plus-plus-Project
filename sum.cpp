#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num1, num2, sum;

    cout<<"Enter two numbers: ";
    cin >>num1 >>num2;

    sum=num1+num2;
    //int sum=num1+num2;

    cout<<"The sum is: "<<sum<<endl;
    //cout<<"The address of sum is: "<<&sum;

    getch();
}
