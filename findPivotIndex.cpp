class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum = 0;
        int rightSum = 0;
        for (int i = 1; i < nums.size(); i++){
            rightSum += nums[i];
        }
        if (leftSum == rightSum){
            return 0;
        }
        for (int i = 1; i < nums.size(); i++){
            rightSum -= nums[i];
            leftSum += nums[i-1];
            if (leftSum == rightSum){
                return i;
            }  
        }
        return -1;
    }
};