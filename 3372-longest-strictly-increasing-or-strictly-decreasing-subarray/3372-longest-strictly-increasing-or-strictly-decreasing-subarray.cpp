class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int count1 = 1, count2 = 1, maxCount = 1;
        for (int i = 0; i < nums.size() - 1; ++i) {
            if (nums[i] < nums[i + 1]) {
                count1++;
                count2 = 1;
            } else if (nums[i] > nums[i + 1]) {
                count2++;
                count1 = 1;
            } else {
                maxCount = max(maxCount, max(count1, count2));
                count1 = 1;
                count2 = 1;
            }
            maxCount = max(maxCount, max(count1, count2));
        }
        return maxCount;
    }
};
