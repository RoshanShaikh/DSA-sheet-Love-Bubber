// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    vector<string> combine(vector<string> a, vector<string> b)
    {
        vector<string> res;
        int n = a.size();
        int m = b.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                res.push_back(a[i] + b[j]);
                res.push_back(b[j] + a[i]);
            }
        }
        return res;
    }

public:
    vector<string> find_permutation(string s)
    {
        int n = s.size();
        if (n == 1)
            return {s};
        unordered_set<string> ans;
        for (int i = 1; i < n; i++)
        {
            vector<string> part1 = find_permutation(s.substr(0, i));
            vector<string> part2 = find_permutation(s.substr(i));
            vector<string> combined = combine(part1, part2);
            for (auto &&str : combined)
            {
                ans.insert(str);
            }
        }
        return vector<string>(ans.begin(), ans.end());
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        vector<string> ans = ob.find_permutation(S);
        for (auto i : ans)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends