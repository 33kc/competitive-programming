class Solution {
public:
    int distinctAverages(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        unordered_set<double> unique;
        int R = nums.size() - 1, L = 0;
        
        while (L < R)
        {
            unique.insert((nums[R] + nums[L]) / 2.0);
            R--;
            L++;
        }
        return unique.size();
    }
};

// by the way this beats 100% because of sorting!!!!!!!!!! 
// O(n log n) because of sorting
