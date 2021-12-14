#include<iostream>
using namespace std;
class student
{
private:
    int id;
    string name;
public:
    void getdata();
    void showdata();
};
void student :: getdata()
{
    cout<<"Enter id & name"<<endl;
    cin>>id>>name;
}
void student ::showdata()

    {
        cout<<id<<"\t"<<name<<endl;
    }

int main(){
student students[3];
int i;
for(i=0;i<3;i++)
{
    students[i].getdata();
}
cout<<"\n Your data"<<endl;
for(i=0;i<3;i++)
{
     students[i].showdata();
}
return(0);
}

