#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int>vec={20,35,78,86,96,100};
  vec[5]=100;
  
  for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<" ";

  }
  
  cout<<endl<<vec.size();
  cout<<endl<<"erase"<<endl;
  vec.erase(vec.begin()+3);
  for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<" ";

  }
  return 0;
}
