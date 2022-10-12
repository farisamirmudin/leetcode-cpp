class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> chSet;
        int max = 0;
        int start = 0;
        int end = 0;
        while(start<s.size()){
            if (chSet.find(s[start]) == chSet.end()){
                if (start-end+1>max){
                    max = start-end+1;
                }
                chSet.insert(s[start]);
                start++;
            }else{
                chSet.erase(s[end]);
                end++;
            }
        }
        return max;
    }
};