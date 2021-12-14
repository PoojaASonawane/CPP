#include<iostream>
using namespace std;
pow(int a, int b)
{
   int i,c;
   c = 1;
   for(i=1;i<=b;i++)
   {
       c = c*a;
   }
   cout<<"Power is"<<endl;
   cout<<c;
}
main()
{
    pow(2,3);
}
