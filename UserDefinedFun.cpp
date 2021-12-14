#include<iostream>
using namespace std;
Two()
{
   cout<<"In Two"<<endl;
}
One()
{
    cout<<"In One"<<endl;
    Two();
    cout<<"Back in one"<<endl;
}
main()
{
    One();
    cout<<"Back in Main"<<endl;
}
