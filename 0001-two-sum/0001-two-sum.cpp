class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int value_to_return=0;
       for (int i=0;i<nums.size();i++){
        value_to_return= target - nums[i];
       for(int j=i+1;j<nums.size();j++)
       {
        if(nums[j]==value_to_return){
            return {i,j};
        }
       }
       } 
return {};    }
};