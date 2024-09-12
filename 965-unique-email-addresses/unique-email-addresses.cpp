class Solution {
public:
    string computeEmails(string email)
    {
        string modifiedEmail = "";
        bool isDomain = false;
        for(int i = 0; i < email.length(); ++i)
        {
            if(email[i] == '@') isDomain = true;
            if(email[i] == '.' && !isDomain) continue;
            
            if(email[i] == '+' && !isDomain )
            {
                while(email[i] != '@') i++;
                isDomain = true;
            }

            modifiedEmail.push_back(email[i]);
        }
        cout << "TG: " << modifiedEmail << endl;
        return modifiedEmail;
    } 
    int numUniqueEmails(vector<string>& emails) {
        unordered_map<string, int> umap;

        for(auto v: emails)
        {
            string modifiedV = computeEmails(v);
            umap[modifiedV] = 1;
        }

        return umap.size();

    }
};