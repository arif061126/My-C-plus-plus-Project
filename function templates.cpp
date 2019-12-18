#include<iostream>
#include<conio.h>

using namespace std;

template<class Mytemplate1,class Mytemplate2>

Mytemplate2 add(Mytemplate1 a, Mytemplate2 b)
{
    return a+b;
}

int main()
{
    cout<<add(10.5,20)<<endl;
    cout<<add(10,20.7)<<endl;
    cout<<add(10.004,20.015)<<endl;
    cout<<add(10,20)<<endl;
    getch();
}
