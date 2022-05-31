// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
/*You are required to complete this method*/

class Solution
{
    int largestRectangleArea(int arr[MAX], int n)
    {
        stack<int> st;
        int maxArea = 0;
        for (int i = 0; i <= n; i++)
        {
            while (!st.empty() && (i == n || arr[st.top()] >= arr[i]))
            {
                int val = arr[st.top()];
                st.pop();
                int width;
                if (st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;
                maxArea = std::max(maxArea, width * val);
            }
            st.push(i);
        }
        return maxArea;
    }

public:
    int maxArea(int M[MAX][MAX], int n, int m)
    {
        // Your code here
        int maxArea = largestRectangleArea(M[0], m);
        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < m; j++)
                if (M[i][j] != 0)
                    M[i][j] += M[i - 1][j];
                else
                    M[i][j] = 0;
            maxArea = max(maxArea, largestRectangleArea(M[i], m));
        }
        return maxArea;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
// } Driver Code Ends