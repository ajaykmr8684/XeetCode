class Solution {
public:
    long long maximumTotalSum(vector<int>& arr) {
      sort(arr.begin(), arr.end());

      int prev = -1;
      long long ans = 0;
      for(int i = arr.size() - 1; i >= 0; --i) {
        if(prev == -1) {
            ans += arr[i];
            prev = ans;
        }
        else {
            if(prev > arr[i]) {
                prev = arr[i];
                ans += prev;
            }
            else {
                prev--;
                ans += prev;
            }
        }
        if(prev == 0 ) return -1;
      } 

      return ans;
    }
};