class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.size() == 1){
            return true;
        }
        map<char,char>charMap;
        set<char>charSet;
        for (int i = 0; i < s.size(); i++){
            if (charMap.count(s[i]) == 0 && charSet.count(t[i]) == 0){
                charMap[s[i]] = t[i];
                charSet.insert(t[i]);
            } else if (charMap.count(s[i]) == 0 && charSet.count(t[i])){
                return false;
            } else if (charMap[s[i]] != t[i]){
                return false;
            }
        }
        return true;
    }
};