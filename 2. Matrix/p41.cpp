// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<vector<int>> sortedMatrix(int k, vector<vector<int>> arr)
    {
        // code here
        vector<int> ans(k * k);
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < k; j++)
            {
                ans[i * k + j] = arr[i][j];
            }
        }
        sort(ans.begin(), ans.end());
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < k; j++)
            {
                arr[i][j] = ans[i * k + j];
            }
        }

        return arr;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
                cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
                cout << v[i][j] << " ";
            cout << "\n";
        }
    }
} // } Driver Code Ends