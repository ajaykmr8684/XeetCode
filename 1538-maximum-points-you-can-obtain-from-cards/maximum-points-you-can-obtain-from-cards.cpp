class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lSum  = 0, rSum = 0, maxSum = 0;

        for(int i = 0; i < k; ++i)
        {
            lSum += cardPoints[i];
        }
        maxSum = lSum;
        int rightInd = cardPoints.size() - 1;
        for(int i = k-1; i >=0; --i)
        {
            lSum -= cardPoints[i];
            rSum += cardPoints[rightInd];
            rightInd--;
            maxSum = max(lSum + rSum, maxSum); 
        }
        return maxSum;
    }
};