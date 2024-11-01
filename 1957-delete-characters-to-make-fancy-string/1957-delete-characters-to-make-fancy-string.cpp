class Solution {
public:
    string makeFancyString(string s) {
        map<char, int> maps;
        char temp = ' ';
        string ans = "";
        for (int i = 0; i < s.length(); i ++) {
            maps[s[i]]++;

            if (temp == ' ') {
                temp = s[i];
            }
            else {
                if (s[i] != temp) {
                    maps[temp] = 0;
                    temp = s[i];
                }
            }

            if (maps[s[i]] < 3 ) {
                ans += s[i];
            }
        }

        return ans;
    }
};