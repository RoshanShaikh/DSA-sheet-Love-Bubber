#include <bits/stdc++.h>
using namespace std;

vector<int> commonElements(vector<vector<int>> &mat)
{
    unordered_map<int, int> map;
    for (int i = 0; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            cout << setw(3) << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < mat[0].size(); i++)
    {
        map[mat[0][i]] = 1;
    }
    for (int i = 1; i < mat.size(); i++)
    {
        for (int j = 0; j < mat[0].size(); j++)
        {
            if (map[mat[i][j]] == i)
                map[mat[i][j]] = i + 1;
        }
    }
    vector<int> ans;
    for (auto &&i : map)
    {
        if (i.second == mat.size())
            ans.push_back(i.first);
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << setw(3) << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    vector<int> v = commonElements(mat);
    for (auto &&i : v)
    {
        cout << i << " ";
    }

    return 0;
}
/*
1 2 1 4 8
3 7 8 5 1
8 7 7 3 1
8 1 2 7 9 */