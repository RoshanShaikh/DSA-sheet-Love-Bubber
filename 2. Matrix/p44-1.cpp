#include <bits/stdc++.h>
using namespace std;

void rotate90Clockwise(vector<vector<int>> &mat)
{
    int n = mat.size();
    vector<vector<int>> dummymat(mat);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dummymat[j][n - i - 1] = mat[i][j];
        }
    }
    mat = dummymat;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> mat(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(3) << mat[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    rotate90Clockwise(mat);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << setw(3) << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
