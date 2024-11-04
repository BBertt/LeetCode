class Solution {
public:
    string compressedString(string word) {
        if (word.empty()) return "";

        string comp;
        char c;
        int z = 0;

        for (int i = 0 ; i < word.length(); i++) {
            if (i == 0) {
                c = word[i];
                z++;
            }
            else {
                if (word[i] == c) {
                    z++;
                }
                else if (c != '\0' && word[i] != c){
                    comp += to_string(z);
                    comp += c;
                    c = word[i];
                    z = 1;
                }
                else if (c == '\0') {
                    c = word[i];
                    z = 1;
                }
                if (z == 9) {
                    comp += to_string(z);
                    comp += c;
                    z = 0;
                    c = '\0';
                }
            }
            if (c != '\0' && i == word.length()-1) {
                comp += to_string(z);
                comp += c;
            }
        }
        return comp;
    }
};