#include<iostream>
using namespace std;
int main()
{
    int i,k=0;
    char ch[15];
    cout<<"ENTER STRING"<<endl;
    cin>>ch;
    for(i=0;ch[i]!='\0';i++)
    {
        k++;
    }
    cout<<"REVERSE STRING IS"<<endl;
    for(i=k-1;i>=0;i--)
    {
        cout<<ch[i];
    }

}
