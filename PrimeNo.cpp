#include<iostream>
using namespace std;
int Prime()
{
    int num,i,count=0;
    cout<<"Enter No"<<endl;
    cin>>num;
    for(i=2;i<=num;i++)
        if(num%2==0)
    {
        count++;
    }
    if(count==1)
    {
       cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Not Prime"<<endl;
    }
}
int main()
{
    Prime();
    return(0);
}
