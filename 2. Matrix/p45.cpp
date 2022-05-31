// { Driver Code Starts
// kth largest element in a 2d array sorted row-wise and column-wise
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int mat[MAX][MAX];
int kthSmallest(int mat[MAX][MAX], int n, int k);
// driver program to test above function
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> mat[i][j];
        int r;
        cin >> r;
        cout << kthSmallest(mat, n, r) << endl;
    }
    // cout << "7th smallest element is " << kthSmallest(mat, 4, 7);
    return 0;
}
// } Driver Code Ends

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
    int start = mat[0][0], end = mat[n - 1][n - 1], mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int low = 0, high = n - 1, m;
            while (low <= high)
            {
                m = (low + high) / 2;
                if (mat[i][m] <= mid)
                    low = m + 1;
                else
                    high = m - 1;
            }
            ans += low;
        }
        if (ans < k)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return start;
}
