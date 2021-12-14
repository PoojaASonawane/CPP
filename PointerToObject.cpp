#include<iostream>
using namespace std;
class test
{
public:
    void show()
    {
        cout<<"Hello Pooja"<<endl;
    }
};
int main()
{
    test t1;
    test *p;    //declaration of pointer variable of class test
    p=&t1;   //storing address of t1 object in p
    p->show();
    return(0);
}
