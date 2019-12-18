//1+3+5+............+n



#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i, n, sum=0;

    cout<<"Enter the last number of series: ";
    cin>>n;

    for(i=1;i<=n;i+=2)
    {
        sum=sum+i;
    }
    cout<<"The sum of the series: "<<sum<<endl;


    getch();
}

