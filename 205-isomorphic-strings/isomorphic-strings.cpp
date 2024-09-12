class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;

        unordered_map<char, char> umap;
        unordered_map<char, char> umap1;

        for(int i = 0; i < t.length(); ++i)
        {
            if((umap.contains(s[i]) && umap[s[i]] != t[i]) || (umap1.contains(t[i]) && umap1[t[i]] != s[i])) return false;
            umap[s[i]] = t[i];
            umap1[t[i]] = s[i];
        }

        return true;

    }
};