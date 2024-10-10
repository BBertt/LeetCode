class Solution {
public:
    bool isPalindrome(int x) {

        string str_x = to_string(x);

        int j = size(str_x) - 1;

        for (int i = 0; i != j; i++) {
            if (str_x[i] != str_x[j]) {
                return false;
            }
            j--;
            if (i == j) {
                break;
            }
        }

        return true; 

    }
};