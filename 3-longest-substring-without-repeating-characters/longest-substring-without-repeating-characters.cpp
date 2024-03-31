class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> duplicates;

        int left = 0;
        int right = 0;
        int len = 0;

        while(right < s.length())
        {
            if(duplicates.find(s[right]) != duplicates.end())
            {
                while(duplicates.find(s[right]) != duplicates.end())
                {
                    duplicates.erase(s[left]);
                    left++;
                }
            }
            else
            {
                duplicates.insert(s[right]);
                len = max(len, right - left + 1);
                right++;
            }

        }

        return len;
    }
};