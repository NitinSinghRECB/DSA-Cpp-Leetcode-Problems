class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int res = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            res ^= nums[i];
        }

        if (res != 0)
            return nums.size();

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0)
                return nums.size() - 1;
        }

        return 0;
    }
};