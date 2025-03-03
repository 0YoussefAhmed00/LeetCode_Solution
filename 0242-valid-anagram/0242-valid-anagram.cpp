using namespace std;
#include <unordered_map>
class Solution {
public:
    bool isAnagram(string s, string t) {
      int count=0;
      int temp=0;
      if(s.size()==t.size()){ 

     for(int i =0;i<t.size();i++){
     temp=s.find(t[i]);

     if(s.find(t[i])!=-1){ 

     s.erase(temp,1);
     count ++;

     }

     }
     cout<< count<<"  ";
     if(count==t.size())
     return true;
     else return false;
      }
      else
    return 0;
    }
 
};