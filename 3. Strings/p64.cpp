#include <bits/stdc++.h>
using namespace std;

vector<int> findMatch(string text, string pattern, int long q)
{
    vector<int> ans;
    int n = text.size();
    int m = pattern.size();
    int x = 11;
    long long x_m = 1;
    long long p_hash = 0;
    long long t_hash = 0;

    for (int i = 0; i < m - 1; i++)
    {
        x_m *= x;
    }

    for (int i = 0; i < m; i++)
    {
        p_hash = (p_hash * x + pattern[i]) % q;
        t_hash = (t_hash * x + text[i]) % q;
    }
    for (int i = 0; i < n - m + 1; i++)
    {
        if (p_hash == t_hash)
        {
            long long j = 0;
            while (j < m && text[i + j] == pattern[j])
                j++;
            if (j == m)
                ans.push_back(i + 1);
        }
        if (i < n - m)
        {
            t_hash = ((t_hash - text[i] * x_m) * x + text[i + m]) % q;
            if (t_hash < 0)
                t_hash = (t_hash + q) % q;
        }
    }
    return ans;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        string text, pattern;
        cin >> text >> pattern;
        vector<int> v = findMatch(text, pattern, 127);
        for (auto &&i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
