#include<iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout<<"In A"<<endl;
    }
};
class B:public A
{
public:
    void disp()
    {
        cout<<"In B"<<endl;
    }
};
int main()
{
    A ob1;
    B ob2;
    //declare base class pointer variable
    A *p;
    p = &ob1;
    p->show();
    //store add.of derived class object into base class class pointer
    p= &ob2;
    p->show();
    //cannot call disp() using base class pointer variable
    //p->disp();  error
    return(0);
}
