class Solution {
public:
    bool isCircularSentence(string sentence) {
        map<int, char> maps;
        int c = 0;
        int isSpace = 0;
        char temp;
        for (int i = 0; i < sentence.length(); i++) {
            if (i == 0) {
                maps[c] = sentence[i];
                c++;
            }
            else if (i == sentence.length()-1) {
                maps[c] = sentence[i];
                c++;
            }
            if (sentence[i] == ' ') {
                maps[c] = temp;
                c++;
                isSpace = 1;
            }
            else if (isSpace == 1) {
                maps[c] = sentence[i];
                c++;
                isSpace = 0;
            }

            temp = sentence[i];
        }

        if (maps[0] != maps[c-1]) return false;

        for (int i = 1; i < c-1; i++) {
            if (i+1 != c-1) {
                if (maps[i] != maps[i+1]) return false;
                i++;
            }
        }

        return true;
    }
};