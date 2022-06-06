// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

// A : given string to search
// B : vector of available strings

class Solution
{
private:
    unordered_map<string, int> map;
    int solve(string a, vector<string> &b, int minL, int maxL)
    {
        if (map[a] == 1)
            return 1;
        if (a.empty())
            return 1;
        if (binary_search(b.begin(), b.end(), a))
        {
            map[a] = 1;
            return 1;
        }
        for (int i = minL; i < maxL + 1 && i < a.size(); i++)
        {
            string x = a.substr(0, i);
            string y = a.substr(i);
            int part1 = binary_search(b.begin(), b.end(), x);
            if (part1)
            {
                int part2 = solve(y, b, minL, maxL);
                if (part1 && part2)
                {
                    map[a] = 1;
                    return 1;
                }
            }
        }
        return 0;
    }

public:
    int wordBreak(string a, vector<string> &b)
    {
        // code here
        int minL = INT_MAX, maxL = INT_MIN;
        for (auto &&str : b)
        {
            minL = min((int)str.size(), minL);
            maxL = max((int)str.size(), maxL);
        }
        sort(b.begin(), b.end());
        return solve(a, b, minL, maxL);
    }

    /*
    int wordBreak(string a, vector<string> &b) {
        //code here
        sort(
            b.begin(), b.end(), [](const std::string &first, const std::string &second)
            { return first.size() > second.size(); });
        for (auto &&str : b)
        {
            int index;
            while ((index = a.find(str)) != string::npos)
            {
                a.replace(index, str.length(), "-");
            }
        }
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != '-')
                return 0;
        }
        return 1;
    }
    */
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> dict;
        for (int i = 0; i < n; i++)
        {
            string S;
            cin >> S;
            dict.push_back(S);
        }
        string line;
        cin >> line;
        Solution ob;
        cout << ob.wordBreak(line, dict) << "\n";
    }
}
// } Driver Code Ends