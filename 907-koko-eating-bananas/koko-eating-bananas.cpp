class Solution {
public:

    double findTotalHours(vector<int> piles, int rate)
    {
        double totalHrs = 0;
        for(int i = 0; i < piles.size(); ++i)
        {
            totalHrs += ceil((double)piles[i] / rate);
        }

        return totalHrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans = 0;
        int low = 1;
        int high = INT_MIN;

        for(auto it: piles)
        {
            high = max(high, it);
        }

        while(low <= high)
        {
            int mid = low + (high - low) / 2;
            double totalHrs = findTotalHours(piles, mid);
            if(totalHrs <= h)
            {
                ans = mid;
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};