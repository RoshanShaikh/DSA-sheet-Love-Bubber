// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string longestPalin(string &s)
    {
        // code here
        int n = s.size();
        int maxLen = 0;
        int start_index = 0;
        string ans;
        for (int i = 0; i < n; i++)
        {
            int j = i, k = i;
            while (j >= 0 && k < n && s[k] == s[j])
            {
                j--;
                k++;
            }
            j++;
            k--;
            int l = k - j + 1;
            if (l == maxLen && j > start_index)
            {
            }
            else if (l >= maxLen)
            {
                start_index = j;
                maxLen = l;
                ans.clear();
                ans = s.substr(j, l);
            }
            j = i;
            k = i + 1;
            while (j >= 0 && k < n && s[k] == s[j])
            {
                j--;
                k++;
            }
            j++;
            k--;
            int l = k - j + 1;
            if (l == maxLen && j > start_index)
            {
            }
            else if (l >= maxLen)
            {
                start_index = j;
                maxLen = l;
                ans = s.substr(j, l);
            }
        }
        return ans;
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
        cout << ob.longestPalin(S) << endl;
    }
}
// Contributed By: Pranay Bansal
// } Driver Code Ends