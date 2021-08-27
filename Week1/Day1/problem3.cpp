// Print the duplicate elements in an array
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
         for(int i=0;i<n;i++)
         {
             int temp=abs(nums[i])-1;
             if(nums[temp]<0)
                 ans.push_back(abs(nums[i]));
             else
                 nums[temp]*=-1;
         }
        return ans;
        
    }
};