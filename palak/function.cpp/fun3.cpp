#include <iostream>
using namespace std;

int factors(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
          cout<<i<<endl;
    }
    return 0;
}

int main()
{
    factors(45);
}
