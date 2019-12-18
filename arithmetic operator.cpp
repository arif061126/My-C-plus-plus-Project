#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int num1=10, num2=3;

    int sum=num1+num2;
    cout<<"The sum: "<<sum<<endl;

    int sub=num1-num2;
    cout<<"The subtraction: "<<sub<<endl;

    int mul=num1*num2;
    cout<<"The multiplication: "<<mul<<endl;

    int div1=num1/num2;
    cout<<"The division: "<<div1<<endl;

    double div2=num1/num2;
    cout<<"The division: "<<div2<<endl;

    double div=(float)num1/num2; //type casting
    cout<<"The division: "<<div<<endl;

    int rem=num1%num2;
    cout<<"The reminder: "<<rem<<endl;




    getch();
}
