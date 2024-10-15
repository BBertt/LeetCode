class Solution {
public:
    long long minimumSteps(string s) {
        int lastIndex = s.size()-1;
        long long swaps = 0;

        for (int i = s.size()-1; i >= 0; i--) {
            if (s[i] == '1') {
                swaps += lastIndex - i;
                lastIndex--;
            }
        }

        return swaps;
    }
};