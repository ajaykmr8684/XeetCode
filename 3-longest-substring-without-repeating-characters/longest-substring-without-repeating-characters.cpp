class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> umap;

        int l = 0;
        int r = 0;
        int maxi = 0;

        while(r < s.length())
        {
            if(umap.find(s[r]) != umap.end())
            {
                l = max(l, umap[s[r]] + 1);
            }
            umap[s[r]] = r;
            maxi = max(maxi, r - l + 1);
            r++;
        }

        return maxi;
    }
};