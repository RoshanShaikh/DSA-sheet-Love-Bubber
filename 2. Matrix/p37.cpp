// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
    {
        // code here
        char dir = 'r';
        int total = r * c;
        int bottom = r - 1;
        int right = c - 1;
        int left = 0, top = 0;
        vector<int> ans(total);
        int count = 0;
        while (left <= right && top <= bottom)
        {
            switch (dir)
            {
            case 'r':
                for (int i = left; i <= right; i++)
                {
                    ans[count++] = matrix[top][i];
                }
                top++;
                dir = 'd';
                break;
            case 'd':
                for (int i = top; i <= bottom; i++)
                {
                    ans[count++] = matrix[i][right];
                }
                right--;
                dir = 'l';
                break;
            case 'l':
                for (int i = right; i >= left; i--)
                {
                    ans[count++] = matrix[bottom][i];
                }
                bottom--;
                dir = 'u';
                break;
            case 'u':
                for (int i = bottom; i >= top; i--)
                {
                    ans[count++] = matrix[i][left];
                }
                left++;
                dir = 'r';
                break;

            default:
                break;
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
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++)
        {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++)
            {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result =
            ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";

        cout << endl;
    }
    return 0;
} // } Driver Code Ends