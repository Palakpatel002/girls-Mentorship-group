#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int>& nums)
{
    
    for(int i=0;i<nums.size();i++)
    {    for(int j=0;j<nums.size();j++)
        {    if(nums[i]<nums[j])
            {
                swap(nums[i],nums[j]);
            }
        }

    }
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";
    }
}
    int main()
    {    
      vector<int>nums={2,0,2,1,1,0 };
        sortColors(nums);
    }