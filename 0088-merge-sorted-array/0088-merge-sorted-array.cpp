class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x = 0;
        for (int i = 0; i < (m+n); i++) {
            if (nums1[i] == 0 && n > 0) {
                nums1[i] = nums2[x++];

                if (x == n) break;
            }
        }

        sort(nums1.begin(), nums1.end());
        
    }
};