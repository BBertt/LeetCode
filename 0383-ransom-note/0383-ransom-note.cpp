class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> maps;
        int n = magazine.length();
        int m = ransomNote.length();

        for (int i = 0; i < n; i++) {
            maps[magazine[i]]++;
        }

        for (int i = 0; i < m; i++) {
            if (maps[ransomNote[i]] < 1) return false;
            maps[ransomNote[i]]--;
            
        }

        return true;
    }
};