#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int r,c;
    cout<<"Enter the number of rows for Matrix-A: ";
    cin>>r;

    cout<<endl<<"Enter the number of Columns for Matrix-A: ";
    cin>>c;

    int A[r][c];
    int i,j;

    cout<<"Enter the elements of Matrix A:"<<endl;

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<"A["<<i<<"]"<<"["<<j<<"]"<<" : ";
            cin>>A[i][j];
        }
        cout<<endl;
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<A[i][j]<<"\t";

        }
        cout<<endl;
    }


    getch();
}
