class Solution {
public:
    int lengthOfLastWord(string s) {
        int begin = -1;
        int end = -1;
        int n = s.length()-1;

        for (int i = n; i >= 0 ; i--) {
            if (end == -1 && s[i] != ' ') {
                end = i;
            }
            else if (end != -1 && begin == -1 && s[i] == ' ') {
                begin = i;
            }
        }
        cout << s.length()-1 << endl;
        cout << end << endl;
        return (end - begin);
    }
};