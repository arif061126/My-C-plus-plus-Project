#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int ch;
    double far, cel, kel, temp;

    cout<<"temperature conversion:"<<endl;
    cout<<"------------------------------------------"<<endl;

    cout<<"1. Celcius to Fahrenheit converter"<<endl;
    cout<<"2. Fahrenheit to Celcius converter"<<endl;
    cout<<"3. Celcius to Kelvin converter"<<endl;
    cout<<"4. Kelvin to Celcius converter"<<endl;
    cout<<"5. Fahrenheit to Kelvin converter"<<endl;
    cout<<"6. Kelvin to Fahrenheit converter"<<endl;

    cout<<"\n\n\nEnter your choice: ";
    cin>>ch;

    switch(ch)
    {
        case 1:
        cout<<"\nEnter the temperature in celcius: ";
        cin>>cel;
        cout<<"------------------------------------------------------------------------"<<endl;

        temp=1.8*cel+32;

        cout<<"The converted temperature from celsius to fahrenheit: "<<temp<<endl;
        cout<<"\n\n\nEnter your choice: ";
        cin>>ch;
        break;

        case 2:
        cout<<"\nEnter the temperature in fahrenheit: ";
        cin>>far;
        cout<<"------------------------------------------------------------------------"<<endl;

        temp=(far-32)/1.8;

        cout<<"The converted temperature from fahrenheit to celcius: "<<temp<<endl;
        cout<<"\n\nEnter your choice: ";
        cin>>ch;
        break;

        case 3:
        cout<<"\nEnter the temperature in kelvin: ";
        cin>>kel;
        cout<<"------------------------------------------------------------------------"<<endl;

        temp=kel-273;

        cout<<"The converted temperature from kelvin to celcius: "<<temp<<endl;
        cout<<"\n\nEnter your choice: ";
        cin>>ch;
        break;

        case 4:
        cout<<"\nEnter the temperature in celcius: ";
        cin>>cel;
        cout<<"------------------------------------------------------------------------"<<endl;

        temp=cel+273;

        cout<<"The converted temperature from kelvin to celcius: "<<temp<<endl;
        cout<<"\n\nEnter your choice: ";
        cin>>ch;
        break;

        case 5:
        cout<<"\nEnter the temperature in fahrenheit: ";
        cin>>far;
        cout<<"------------------------------------------------------------------------"<<endl;

        temp=(float)5/9*(far+459.67);

        cout<<"The converted temperature from fahrenheit to kelvin: "<<temp<<endl;
        cout<<"\n\nEnter your choice: ";
        cin>>ch;

        case 6:
        cout<<"\nEnter the temperature in kelvin: ";
        cin>>kel;
        cout<<"------------------------------------------------------------------------"<<endl;

        temp=(float)5/9*(kel-273)+32;

        cout<<"The converted temperature from kelvin to fahrenheit: "<<temp<<endl;
        cout<<"\n\nEnter your choice: ";
        cin>>ch;
        break;

        default: cout<<"Error!!!!!";

    }


    getch();
}
