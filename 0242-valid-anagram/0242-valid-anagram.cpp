class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int map1[26];
        memset(map1, 0, sizeof map1);

        for (int i = 0; i < s.length(); i++) {
            map1[t[i]-'a']++;
            map1[s[i]-'a']--;
        }

        for (auto& itr : map1) {
            if (itr) return false;
        }

        return true;
    }
};