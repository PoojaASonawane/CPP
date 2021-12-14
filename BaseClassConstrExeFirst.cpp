#include<iostream>
using namespace std;
class A
{
private:
    int i;
public:
    A()
    {
        i=10;
    }
    int getI()
    {
        return i;
    }
};
class B: public A
{
private:
    int j;
public:
    B()
    {
        j=20;
    }
    void add()
    {
        cout<<getI()+j<<endl;
    }
};
int main()
{
    B ob;
    ob.add();
    return(0);
}
