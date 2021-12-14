#include<iostream>
using namespace std;
class student
{
private:
    int id;
    string name;
public:
    void getdata()
{
    cout<<"Enter id & name"<<endl;
    cin>>id>>name;
}
    void showdata()
    {
        cout<<id<<"\t"<<name<<endl;
    }
};
int main(){
student students[2];
int i;
for(i=0;i<3;i++)
{
    students[i].getdata();
}
cout<<"\n Your data";
for(i=0;i<3;i++)
{
     students[i].showdata();
}
return(0);
}
