#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<"In A"<<endl;            //Base class constructor executed first
    }
};

class B: public A
{
public:
    B()
    {
        cout<<"In B"<<endl;
    }
};
class C: public B
{
public:
    C()
    {
        cout<<"In C"<<endl;
    }
};
int main()
{
    C ob;
    return(0);
}
