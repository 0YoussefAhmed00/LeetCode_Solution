#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        multiset<long long> s(nums.begin(), nums.end()); 
        int count = 0;
        
        while (*s.begin() < k) { 
            auto it = s.begin();
            long long x = *it; 
            s.erase(it);
            
            it = s.begin();
            long long y = *it; 
            s.erase(it);
            
            long long newVal = min(x, y) * 2 + max(x, y); 
            s.insert(newVal);
            count++;
        }
        
        return count;
    }
};
