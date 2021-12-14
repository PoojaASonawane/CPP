#include<iostream>
using namespace std;
class test
{
private:
    int i;
public:
    test(int i)
    {
        this->i=i;
    }
    void show()
    {
        cout<<i;
    }
};
int main()
{
    test t1(10);
    t1.show();
    //t1.show();
    return(0);
}
