class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int value = 0;
        int key;
        map <int, int> maps;

        for (auto& num : nums) {
            maps[num]++;
            if (maps[num]/2 > value) {
                value = maps[num];
                key = num;
            }
        }

        return key;
    }
};