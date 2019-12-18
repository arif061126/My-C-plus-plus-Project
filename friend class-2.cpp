#include<iostream>
#include<conio.h>


using namespace std;

class A
{
private:
    int id;
    string name;
public:
    void setIdName(int a,string b)
    {
        id=a;
        name=b;
    }
    getIdName()
    {
        return 0;
    }
    friend class B;

};
class B
{
public:
    void display(A ob1)
    {
        cout<<ob1.id<<endl;
        cout<<ob1.name<<endl;
    }
};



int main()
{
    A ob1;
    ob1.setIdName(101,"Arif");
    B ob2;
    ob2.display(ob1);
    getch();
}
