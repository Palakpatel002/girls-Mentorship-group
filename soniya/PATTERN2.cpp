                                                    DATE-20/09/2022

#include <iostream>
using namespace std;

int main()
{
  for(int i= 1;i <= 5; i++){
    for(int j= 1; j <= 5-i; j++){
      cout<<" ";
    }
    for(int k = 1 ; k <= i ; k++ ){
        cout<<"*";
       }
       cout<<endl;
    }


for(int i = 4; i>=1;i--){
 

for(int k = 1; k<=5-i;k++){
  cout<<" ";}
for(int j = 1; j<=i; j++){
  cout<<"*";
}
   cout<<endl;
}
return 0;
}
OUTPUT--------------------------
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
  for(int i= 1;i <= 5; i++){
    for(int j= 1; j <= 5; j++){
      if(i==1||i==5||j==1||j==5){
      cout<<"*";}
     else{
      cout<<" ";
     }
      }
      cout<<endl;
  }
return 0;
}
OUTPUT..............................
*****
*   *
*   *
*   *
*****
--------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
  for(int i= 1;i <= 5; i++){
    for(int j= 1; j <= 5-i; j++){
      cout<<" ";
    }
    for(int k = 1; k <= i ; k++){
      cout<<"*";
    }
    cout<<endl;

    }
return 0;
}
OUTPUT..................................
    *
   **
  ***
 ****
*****
--------------------------------------------------------------------------------------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
  for(int i= 5; i >= 1; i--){
    for(int j= 1; j <= 5-i; j++){
      cout<<" ";
    }
    for(int k = 1; k <= i ; k++){
      cout<<"*";
    }
    cout<<endl;

    }
return 0;
}
OUTPUT........................................
*****
 ****
  ***
   **
    *
    -------------------------------------------------------------------------------------------------------------------------------
    #include <iostream>
using namespace std;

int main()
{
  for(int i= 1; i <= 5; i++){
    for(int j= 1; j <= i; j++){
      cout<<"*"; }
      cout<<endl;}

    for(int i= 4; i >= 1 ; i--){
      for(int j = 1 ; j<= i ; j++){
        cout<<"*";
      }
        cout<<endl;
      }
}

OUTPUT............................................
*
**
***
****
*****
****
***
**
*