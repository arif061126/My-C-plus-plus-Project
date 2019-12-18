#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    char ch;
    cout<<"Enter any Letter: ";
    cin>>ch;

    ch=tolower(ch);

    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"Vowel"<<endl;
            break;
        default:
            cout<<"Consonent";
    }



    getch();
}
