#include <bits/stdc++.h>
using namespace std;

bool rotatedString(string s, string goal)
{
    int n = s.size();
    int m = goal.size();
    if (n != m)
        return false;
    int i = 0, j = 0;
    while (i < n)
    {
        int k = i;
        while (j < m && s[k] == goal[j])
        {
            k++;
            j++;
            if (k == n)
                k %= n;
        }
        if (j == m)
            return true;
        j = 0;
        i++;
    }
    return false;
}

int main()
{
    string s, goal;
    while (true)
    {
        cin >> s;
        cin >> goal;
        cout << (rotatedString(s, goal) ? "true" : "false") << "\n";
    }
    return 0;
}