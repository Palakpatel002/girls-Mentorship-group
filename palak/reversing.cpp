#include <iostream>
using namespace std;
int main()
{
  int n,count=0;
  cin>>n;
  for (;n!=0;)
  {
    count=count*10;
      count=count+n%10;
    n=n/10;
  }
  cout<<"Reverse number is"<<count<<endl;
  return 0;
}

