//1^2+2^2+3^2+............+n^2



#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int main()
{
    int i, n, sum=0;

    cout<<"Enter the last number of series: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,2);
    }
    cout<<"The sum of the series: "<<sum<<endl;


    getch();
}

