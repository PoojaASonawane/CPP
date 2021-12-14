#include<iostream>
#include<string.h>
using namespace std;
class Test
{
public:
    void add(int x, int y)
    {
        cout<<"int add called"<<endl;
        cout<<x+y<<endl;
    }
    void add(float x, float y)
    {
        cout<<"float add called"<<endl;
        cout<<x+y<<endl;
    }
    void add(char *x, char *y)
    {
        char x1[15];
        strcpy(x1,x);
        strcat(x1,y);
        cout<<x1;
    }
};
int main()
{
    Test t1;
    t1.add(1.2f, 3.4f);
    t1.add(100,200);
    t1.add("Hello", "Pooja");
    return(0);
}
