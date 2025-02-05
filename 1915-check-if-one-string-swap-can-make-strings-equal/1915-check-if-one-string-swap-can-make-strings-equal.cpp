#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
                if (s1 == s2) {
            return true;
        }
        if (s1.length() != s2.length()) {
            return false;
        }

        unordered_map<char, int> count1, count2;
        for (char c : s1) {
            count1[c]++;
        }

        for (char c : s2) {
            count2[c]++;
        }

        if (count1 != count2) {
            return false;
        }

        vector<int> diffI;
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                diffI.push_back(i);
            }
        }

return diffI.size() == 2 && s1[diffI[0]] == s2[diffI[1]] && s1[diffI[1]] == s2[diffI[0]];
    }
};
