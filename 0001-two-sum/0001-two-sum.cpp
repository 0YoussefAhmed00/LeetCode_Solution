// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//        int value_to_return=0;
//        for (int i=0;i<nums.size();i++){
//         value_to_return= target - nums[i];
//        for(int j=i+1;j<nums.size();j++)
//        {
//         if(nums[j]==value_to_return){
//             return {i,j};
//         }
//        }
//        } 
// return {};    }
// };
// 2nd solution
//key 0 value 1
//key 1 value 2
//key 2 value 3 
//key 3 value 4
// target 7 (4+3) O(n)+O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int>t_sum;
       int toBeFound=0;
       for(int i=0;i<nums.size();i++)
       {
        toBeFound=target-nums[i];
        if(t_sum.find(toBeFound)!=t_sum.end())
        return {t_sum[toBeFound],i};
        t_sum[nums[i]]=i;
       }
       return {};
       }
};