class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int l = 0, r = height.size() - 1, res = 0;

        while (r > l)
        {
            int a = (r - l) * min(height[l], height[r]);
            res = max(res, a);
            if (height[l] > height[r]) r--;
            else l++;
        }
        
        return res;
    }
};
