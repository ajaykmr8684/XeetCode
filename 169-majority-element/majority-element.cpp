class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> umap;
        int maxi = INT_MIN;
        int ans;

        for(auto v: nums)
        {
            umap[v]++;
        }

        for(auto v: umap)
        {
            if(v.second > maxi)
            {
                ans = v.first;
                maxi = v.second;
            }
        }

        return ans;
    }
};