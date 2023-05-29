class Solution
{
public:
    vector<string> CamelCase(int N, vector<string> Dictionary, string Pattern)
    {
        // code here
        vector<string> ans;
        // unordered_map<string, string> mp;
        int rl = Pattern.length();
        int pos = 0;
        char ch = Pattern[pos];
        for (int i = 0; i < N; i++)
        {
            string cstr = Dictionary[i];
            // cout<<"curr str : "<<cstr<<endl;
            int cl = cstr.length();
            for (int j = 0; j < cl; j++)
            {
                char crch = cstr[j];
                // cout << crch<<" "<<ch<<endl;

                if (crch >= 65 && crch <= 90 && pos < rl && crch != ch)
                {
                    pos = 0;
                    ch = Pattern[pos];
                    break;
                }
                else if (crch >= 65 && crch <= 90 && pos < rl && crch == ch)
                {
                    if (pos == rl - 1)
                    {
                        ans.push_back(cstr);
                        // cout<<"exe"<<endl;
                        pos = 0;
                        ch = Pattern[pos];
                        break;
                    }
                    else
                    {
                        pos++;
                        ch = Pattern[pos];
                    }
                }
            }
            pos = 0;
            ch = Pattern[pos];
        }
        if (ans.size() != 0)
            return ans;

        else
        {
            ans.push_back("-1");
            return ans;
        }
    }
};