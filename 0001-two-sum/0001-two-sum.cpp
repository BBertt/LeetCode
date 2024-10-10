class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();

        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    vector<int> temp = {i, j};
                    return temp;
                }
            }
        }

        return nums;
    }
};