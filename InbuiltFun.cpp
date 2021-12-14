#include<iostream>
//#include<math.h>
#include<string.h>
using namespace std;
main()
{
   char name[15];
   int len;
   cout<<"Enter Your Name"<<endl;
   cin>>name;
   len = strlen(name);
   cout<<"No. of characters in your name is"<<endl;
   cout<<len;
}
