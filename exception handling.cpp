#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    while(1)
    {
        try
    {
        double num1,num2;
        cout<<"Enter num1: ";
        cin>>num1;
        cout<<"Enter num2: ";
        cin>>num2;
        if(num2==0)
        {
            throw -1;
        }
        double div=(double)num1/num2;
        cout<<"Div: "<<div<<endl;
    }
    catch(...)
    {
        cout<<"Devide by 0 is not possible"<<endl<<"Please try again!!"<<endl;
    }
    }

    getch();
}
