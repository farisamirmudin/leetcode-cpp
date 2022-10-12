class Solution {
public:
    bool isSubsequence(string s, string t) {
        int p = 0;
        
        if (s.size() > t.size()){
            return false;
        }else if(s.size() && t.size() == 0){
            return false;
        }else if(s.size() == 0){
            return true;
        }
        for (int i = 0; i < t.size(); i++){
            if(t[i] == s[p]){
                p++;
            }
            if (p == s.size()){
                return true;
            }
        }
        return false;
    }
};
