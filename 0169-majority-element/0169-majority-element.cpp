class Solution {
public:
    int majorityElement(vector<int>& nums) {
        double value = 0;
        int key;
        map <int, int> maps;

        for (auto& num : nums) {
            maps[num]++;
            if (maps[num] > nums.size()/2) {
                value = maps[num];
                key = num;
            }
        }

        return key;
    }
};