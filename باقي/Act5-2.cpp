#include <iostream>
using namespace std;

int main()
{
 int num;

   cout<<"Enter the number: ";
   cin>>num;

 for(int i=num; i>=1; --i)
{
 for(int a=1; a<=i; ++a)
{
    cout<<"* ";
}
    cout<<"\n";
}
}
