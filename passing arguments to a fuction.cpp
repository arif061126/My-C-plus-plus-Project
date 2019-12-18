#include<iostream>
#include<conio.h>

using namespace std;

void display(int num)
{
    num=20;
}
void display(int *num1)
{
    *num1=20;
}


int main()
{
    int x=10;

    cout<<"Before calling the function x= "<<x<<endl;

    display(x);
    cout<<"After calling the function (passing value) x= "<<x<<endl;

    display(&x);
    cout<<"After calling the function (passing reference) x= "<<x;


    getch();
}
