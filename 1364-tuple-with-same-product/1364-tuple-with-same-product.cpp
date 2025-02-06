#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int, int> pf;
        int count = 0;

       
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                int p = nums[i] * nums[j];

               
                if (pf.count(p)) {
                    count += 8 * pf[p];  
                }

                pf[p]++;
            }
        }

        return count;
    }
};
