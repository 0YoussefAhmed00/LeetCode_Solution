class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        
        int max1 = 0, temp = nums[0];
        
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] < nums[i + 1]) {
                temp += nums[i + 1];
            } else {
                max1 = max(max1, temp);
                temp = nums[i + 1]; 
            }
        }
        
        max1 = max(max1, temp);
        return max1;
    }
};
