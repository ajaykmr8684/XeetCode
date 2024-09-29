class Solution {
public:
    string generateString(string s)
    {
        string generatedString = "";
        for(auto v: s)
        {
            if(v == 'z') generatedString += 'a';
            generatedString += v + 1;
        }
        return generatedString;
    }
    char kthCharacter(int k) {
        string m = "a";
        while(m.length() <= k)
        {
            string gen = generateString(m);
            m += gen;
        }
        return m[k-1];
    }
};