// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int median(vector<vector<int>> &arr, int row, int column)
    {
        // code here
        int n = row * column;
        int start = 0, end = 2000;
        while (start <= end)
        {
            int mid = (start + end) / 2;
            int ans = 0;
            for (int i = 0; i < row; i++)
            {
                int low = 0, high = column - 1;
                while (low <= high)
                {
                    int m = (low + high) / 2;
                    if (arr[i][m] <= mid)
                        low = m + 1;
                    else
                        high = m - 1;
                }
                ans += low;
            }
            if (ans <= n / 2)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return start;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j)
                cin >> matrix[i][j];
        Solution obj;
        cout << obj.median(matrix, r, c) << endl;
    }
    return 0;
} // } Driver Code Ends