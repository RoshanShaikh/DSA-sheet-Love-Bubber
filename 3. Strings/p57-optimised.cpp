// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
private:
    void solve(string &s, set<string> &ans, int index)
    {
        if (index == s.size())
        {
            ans.insert(s);
            return;
        }

        for (int i = index; i < s.size(); i++)
        {
            swap(s[i], s[index]);
            solve(s, ans, index + 1);
            swap(s[i], s[index]);
        }
    }

public:
    vector<string> find_permutation(string s)
    {
        // Code here there
        set<string> ans;
        int index = 0;
        solve(s, ans, index);
        return vector<string>(ans.begin(),ans.end());
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