class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 1;
        int curr = nums[0];
        int n = nums.size();

        for (int i = 1; i < n; i++) {
            if (nums[i] > curr) {
                curr = nums[i];
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};