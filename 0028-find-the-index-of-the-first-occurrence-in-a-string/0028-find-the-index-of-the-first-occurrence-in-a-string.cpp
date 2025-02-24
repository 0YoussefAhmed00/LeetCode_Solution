class Solution {
public:
    int strStr(string haystack, string needle) {
        int test =haystack.find(needle);
        if(test!=-1){ 
        return test;
        }
        else return -1;
    }
};