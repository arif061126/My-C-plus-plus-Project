#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int r,c,n;

    cout<<"Enter the number of rows: ";
    cin>>n;

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<"  ";
        }
        for(c=1;c<=r;c++)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }



    getch();
}

