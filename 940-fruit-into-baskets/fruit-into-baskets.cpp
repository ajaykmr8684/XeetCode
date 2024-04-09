class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int, int> umap;

        int l = 0;
        int r = 0;
        int ans = 0;

        while(r < fruits.size())
        {
            umap[fruits[r]]++;
            if(umap.size() > 2)
            {
                if(umap.size() > 2)
                {
                    umap[fruits[l]]--;
                    if(umap[fruits[l]] == 0)
                    {
                        umap.erase(fruits[l]);
                    }
                    l++;
                }
            }
            if(umap.size() <= 2) ans = max(ans, r - l + 1);
            r++;
        }

        return ans;
    }
};