#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  vector<int>vec={57,78,75,234,765,24,578,54};
  sort(vec.begin(),vec.end());
  for(int i=0; i<vec.size(); i++){
    cout<<vec[i]<<" ";

  }
  cout<<endl;
}
