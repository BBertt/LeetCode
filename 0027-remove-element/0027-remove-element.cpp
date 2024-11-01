class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i ++) {
            if (nums[i] == val) {
                for (int j = i+1 ; j < nums.size(); j++) {
                    if (nums[j] != val) {
                        int temp = nums[i];
                        nums[i] = nums[j];
                        nums[j] = temp;
                    }
                }
            }
        }
        int c;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == val) {
                c = i;
                break;
            }
        }

        return c;
    }
};