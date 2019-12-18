#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;

    int student[n],i,sum=0;
    float avg;
    for(i=0;i<n;i++)
    {
        cout<<"Student "<<i+1<<": ";
        cin>>student[i];
    }

    for(i=0;i<n;i++)
    {
      sum=sum+student[i];

    }
    cout<<"The sum of numbers: "<<sum<<endl;
    avg=(float)sum/n;
    cout<<"The Average of numbers: "<<avg<<endl;

    int max=student[0];

    for(i=0;i<n;i++)
    {
        if(max<student[i])
        {
            max=student[i];
        }
    }
    cout<<"The maximum number: "<<max<<endl;

    int min=student[0];

    for(i=0;i<n;i++)
    {
        if(min>student[i])
        {
            min=student[i];
        }
    }
    cout<<"The maximum number: "<<min<<endl;



    getch();
}
