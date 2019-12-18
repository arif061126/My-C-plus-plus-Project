#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

int main()
{
    float num1=10, num2=3;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);

    float sum=num1+num2;
    cout<<setw(20)<<"The sum: "<<sum<<endl;

    //cout<<noshowpoint;
    float sub=num1-num2;
    cout<<setw(20)<<"The subtraction: "<<sub<<endl;

    float mul=num1*num2;
    cout<<setw(20)<<"The multiplication: "<<mul<<endl;

    //float div1=num1/num2;
    //cout<<"The division: "<<div1<<endl;

    double div2=num1/num2;
    cout<<setw(20)<<"The division: "<<div2<<endl;

    double div=num1/num2; //type casting
    cout<<setw(20)<<"The division: "<<div<<endl;

    //int rem=num1%num2;
    //cout<<"The reminder: "<<rem<<endl;




    getch();
}

