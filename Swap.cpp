#include<iostream>
using namespace std;
int Swap()
{
    int a,b;
    cout<<"Enter 2 No.s to perform swapping"<<endl;
    cin>>a>>b;
    a= a*b;  //3*4=12
    b = a/b; //12/4=3
    a = a/b;  //12/3=4
    cout<<a<<"\t"<<b;
}
int main()
{
    Swap();
}
