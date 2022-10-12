class Solution {
public:
    int reverse(int x) {
        int clone = abs(x);
        int ans = 0;
        int rem;
        while(clone > 0){
            rem=clone%10;
            clone/=10;
            if (ans < INT_MIN/10 || ans > INT_MAX/10){
                return 0;
            }
            ans = ans*10 + rem; 
        }
        if (x < 0){
            ans = -ans;
        }
        return ans;
    }
};