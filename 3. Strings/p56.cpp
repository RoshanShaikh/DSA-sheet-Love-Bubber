#include <bits/stdc++.h>
using namespace std;
vector<string> ans;
void solve(string &str, int index, string output)
{
    if (index == str.size())
    {
        if (!output.empty())
            ans.push_back(output);
        return;
    }
    solve(str, index + 1, output);
    output.push_back(str[index]);
    solve(str, index + 1, output);
}
vector<string> subsequences(string str)
{
    string output = "";
    int index = 0;
    solve(str, index, output);
    return ans;
}

int main()
{
    string str;
    cin >> str;
    vector<string> sub = subsequences(str);
    for (auto &&i : sub)
    {
        cout << i << " ";
    }

    return 0;
}