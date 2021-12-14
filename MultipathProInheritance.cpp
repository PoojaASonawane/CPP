#include<iostream>
using namespace std;
class student
{
private:
    int id;
    string name;
public:
    void setdata()
    {
        cout<<"Enter id & name:"<<endl;
        cin>>id>>name;
    }
    void showdata()
    {
        cout<<id<<"\t"<<name<<endl;
    }
};
class mark:virtual public student
{
private:
    int m1,m2;
public:
    void setmarks()
    {
        cout<<"Enter marks"<<endl;
        cin>>m1>>m2;
    }
    void showmarks()
    {
        cout<<m1<<"\t"<<m2<<endl;
    }
};
class sport:virtual public student
{
private:
    int grade;
public:
    void setgrade()
    {
        cout<<"Enter grade"<<endl;
        cin>>grade;
    }
    void showgrade()
    {
        cout<<grade<<endl;
    }
};
class result:public mark,public sport
{
    public:
        void set()
        {
            setdata();
            setmarks();
            setgrade();
        }
        void show()
        {
            showdata();
            showmarks();
            showgrade();
        }
};
int main()
{
    result ob;
    ob.set();
    ob.show();
    return(0);
}



