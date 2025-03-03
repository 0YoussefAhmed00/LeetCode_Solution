using namespace std;
#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
      int count=0;
      int temp=0;
      if(s.size()!=t.size())
      return false;
      unordered_map<char,int> charcount;
      for(char& c : s){
        charcount[c]++;
      }
      for(char& c : t){
        if(charcount[c]==0)
        return false;
        charcount[c]--;
      }
    return true;
    }
 
};