#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int year;
    cout<<"Enter any year: ";
    cin>>year;

    if (year%4==0||year%100==0||year%400==0)
    {
        cout<<"\nThe Year is a Leap year."<<endl;
    }
    else
    {
        cout<<"\nThe Year is not a Leap year."<<endl;
    }


    getch();
}
