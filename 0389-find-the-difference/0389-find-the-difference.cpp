class Solution {
public:
    char findTheDifference(string s, string t) {
        char result = 0;
        for (int i = 0; i < s.length(); i++) {
            result ^= s[i];
            result ^= t[i];
        }
        result ^= t.back(); 
        return result;
    }
};