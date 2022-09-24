class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int previousSum=nums[0];
        vector<int> res;
        res.push_back(nums[0]);
        if (nums.size() == 1){
            return res;
        }
        for (int i=1;i<nums.size();i++){
            res.push_back(nums[i]+previousSum);
            previousSum += nums[i];
        }
        return res;
    }
};