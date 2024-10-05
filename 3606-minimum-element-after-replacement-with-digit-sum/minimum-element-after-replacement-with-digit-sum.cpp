class Solution {
public:
    void changeToSumOfDigits(vector<int> &nums) {
        for(int i = 0; i < nums.size(); ++i) {
            int sum = 0;
            int v = nums[i];
            while(v) {
                int digit = v % 10;
                sum += digit;
                v /= 10;
            }
            nums[i] = sum;
        }
    }
    int minElement(vector<int>& nums) {
        changeToSumOfDigits(nums);
        int mini = INT_MAX;
        for(auto v: nums) {
            mini = min(mini, v);
        }
        return mini;
    }
};