#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int x=10;

    int y=++x;

    cout<<"x: "<<x<<endl;//11
    cout<<"y: "<<y<<endl;//11

     y=x++;

    cout<<"x: "<<x<<endl;//12
    cout<<"y: "<<y<<endl;//11

     y=--x;

    cout<<"x: "<<x<<endl; //11
    cout<<"y: "<<y<<endl;//11

     y=x--;

    cout<<"x: "<<x<<endl;//10
    cout<<"y: "<<y<<endl;//11





    getch();
}
