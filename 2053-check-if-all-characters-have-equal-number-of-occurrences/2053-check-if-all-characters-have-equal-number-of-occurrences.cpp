class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char ,int> occ_freq;
        for(char c:s){
            occ_freq[c]++;
        }
        auto to_start=occ_freq.begin();
        int to_stop=to_start->second;
       for(auto pair:occ_freq){
        if(to_stop!=pair.second)
        return false;
       }
       return true;
    }
};