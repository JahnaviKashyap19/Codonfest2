#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int n = nums.size();
int max = INT_MIN;
int curr = 0;

    for(int i=0;i<n;i++)
    {
        curr += nums[i];

        if(curr>max)
        {
            max = curr;
        }
        if(curr<0)
        {
            curr = 0;
        }
    }

    return max;
    }
};
int main()
{   int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    Solution obj;
    cout<<obj.maxSubArray(nums)<<endl;
    return 0;

}
