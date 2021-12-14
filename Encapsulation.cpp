#include<iostream>
using namespace std;
class student
{
private:
    int sid;
    string name;
public:
    void setid(int x)
    {
        if(x<=0)
            cout<<"plz enter valid value"<<endl;
            else
                sid=x;
        return;
    }

void setname(string n)
{
    name=n;
}
int getid()
{
    return sid;
}
string getname()
{
    return name;
}
};
int main()
{
    student s1;
    s1.setid(100);
    s1.setname("pooja");
    cout<<s1.getid()<<"\t"<<s1.getname();
    return(0);
}
