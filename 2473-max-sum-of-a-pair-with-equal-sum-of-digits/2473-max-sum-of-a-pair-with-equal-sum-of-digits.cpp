#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int, pair<int, int>> maxNumsWithSum;
        int maxSum = -1;

        for (int num : nums) {
            int sumDigits = 0, temp = num;
            while (temp) {
                sumDigits += temp % 10;
                temp /= 10;
            }

            auto& maxPair = maxNumsWithSum[sumDigits];

            if (num > maxPair.first) {
                maxPair.second = maxPair.first;
                maxPair.first = num;
            } else if (num > maxPair.second) {
                maxPair.second = num;
            }

            if (maxPair.first && maxPair.second) {
                maxSum = max(maxSum, maxPair.first + maxPair.second);
            }
        }

        return maxSum;
    }
};