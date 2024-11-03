class Solution {
public:
    bool rotateString(string s, string goal) {
        for (int i = 0; i < s.length(); i ++) {
            string temp = s.substr(1) + s[0];
            s = temp;

            if (s == goal) return true;
        }
        return false;
    }
};