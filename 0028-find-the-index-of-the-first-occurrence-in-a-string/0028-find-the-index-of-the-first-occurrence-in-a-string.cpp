class Solution {
public:
    int strStr(string haystack, string needle) {
        for (int i = 0; i < haystack.length(); i++) {
            int j = i;
            int k = 0;
            int isFound = 0;
            while (haystack[i] == needle[0] && k < needle.length()) {
                if (haystack[j] == needle[k]) {
                    isFound = 1;
                }
                else {
                    isFound = 0;
                    break;
                }
                j++;
                k++;
            }

            if (isFound == 1) {
                return i;
            }
        }
        return -1;
    }
    
};