#include<iostream>
using namespace std;
int Prime()
{
    int num,i=2;
    cout<<"Enter the number"<<endl;
    cin>>num;
    while(i<num)
{
if(num%i==0)
{
cout<<" not a prime number"<<endl;
break;
}

   i++;


}
if(i==num)
{
  cout<<" a prime number"<<endl;
}

}
int main()
{
    Prime();
    return(0);
}

