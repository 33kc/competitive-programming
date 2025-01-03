class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int num : nums) {
            count[num]++;
        }
        
        int n = nums.size();
        vector<vector<int>> bucket(n + 1);
        for (auto& p : count) {
            bucket[p.second].push_back(p.first);
        }
        
        vector<int> result;
        for (int i = n; i >= 1; --i) {
            for (int num : bucket[i]) {
                result.push_back(num);
                if (result.size() == k) {
                    return result;
                }
            }
        }
        
        return result;
    }
};
