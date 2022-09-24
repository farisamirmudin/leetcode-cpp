class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int diff;
        unordered_map<int, int> hm;
        for (int i=0;i<nums.size();i++){
            diff=target-nums[i];
            if(hm.find(diff) != hm.end() && hm.find(diff)->second != i){
                res.push_back(hm.find(diff)->second);
                res.push_back(i);
                return res;
            }
            hm[nums[i]] = i;
        }
        return res;
    }
};