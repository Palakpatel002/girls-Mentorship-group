/*1 2 3 4 5 
  1 2 3 4 
  1 2 3 
  1 2
  1
*/
 
#include<iostream>
using namespace std; 
int main()
{
    for(int i=5; i>=1;i--)
    {
        cout<<endl;
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
    }
}
