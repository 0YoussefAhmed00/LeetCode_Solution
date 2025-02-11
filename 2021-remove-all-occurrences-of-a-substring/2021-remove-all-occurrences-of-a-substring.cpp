#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        int partLen = part.length();
        
        size_t pos = s.find(part);
        while (pos != string::npos) {
            s.erase(pos, partLen);
            pos = s.find(part); 
        }
        
        return s;
    }
};
