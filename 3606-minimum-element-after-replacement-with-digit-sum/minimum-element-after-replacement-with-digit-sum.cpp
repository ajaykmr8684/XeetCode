class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i = 0; i < nums.size(); ++i) {
            int sum = 0;
            int v = nums[i];
            while(v) {
                int digit = v % 10;
                sum += digit;
                v /= 10;
            }
            mini = min(sum, mini);
        }
        return mini;
    }
};