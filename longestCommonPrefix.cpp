class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1){
            return strs[0];
        }
        
        int count = 0;
        int min = 200;
        string shortest;
        
        for (int i = 0; i < strs.size(); i++){
            if (strs[i].length() < min){
                min = strs[i].length();
                shortest = strs[i];
            }
        }
        for (int i = 0; i < min; i++){
            for (int j = 0; j < strs.size(); j++){
                if (strs[j][i] != shortest[i]){
                    return shortest.substr(0,count);
                }
            }
            count++;
        }
        return shortest.substr(0,count);
    }
};
