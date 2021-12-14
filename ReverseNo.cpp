#include<iostream>
using namespace std;
int main()
{
    int rev=0;
    int num;
    cout<<"ENTER NUMBER"<<endl;
    cin>>num;
    for(;num>0;num=num/10)
    {
        rev=(rev*10)+(num%10);
    }
    cout<<"REVERSE NUMBER IS"<<"\t"<<rev<<endl;


}

