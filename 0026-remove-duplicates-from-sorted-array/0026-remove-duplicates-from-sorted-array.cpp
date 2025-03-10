class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;  
        vector<int> returned;
        
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                returned.push_back(nums[i]);
            }
        }

        returned.push_back(nums.back());

        for (int i = 0; i < returned.size(); i++) {
            nums[i] = returned[i];
        }

        return returned.size();  
    }
};
