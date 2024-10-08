class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& arr, int target) {
        for (int i = 0; i < arr.size(); i++) { 
            for (int j = 0; j < i; j++) {
                if (arr[i] + arr[j] == target) {
                    return {i, j}; 
                }
            }
        }
        return {};
    }
};
