class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int s = nums[0], b = nums[0];
        for(int i = 1; i < nums.size(); i++)
        {
           s = max(nums[i], s+nums[i]);
           b = max(b,s);
        }
        return b;
    }
};
