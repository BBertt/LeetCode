class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        vector<int> results;
        vector<int> temp;
        int c = 0;
        int z = 0;
        bool isAsc = true;
        for (int i = 0; i < nums.size(); i++) {
            temp.push_back(nums[i]);
            c++;

            if (c > 1) {
                if (temp[c-2] + 1 != temp[c-1]) {
                    isAsc = false;
                }
            }

            if (c == k) {
                if (isAsc == true) {
                    results.push_back(temp[c-1]);
                }
                else {
                    results.push_back(-1);
                }
                c = 0;
                isAsc = true;
                z++;
                if (z + k > nums.size()) break;
                i = z-1;
                temp.clear();
            }
        }

        return results;
    }
};