// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here
        int sum = 0, start = 0, end = 0;
        int ans = n + 1;
        while (end < n)
        {
            while (sum <= x && end < n)
            {
                sum += arr[end++];
            }
            while (sum > x && start < n)
            {
                ans = min(ans, end - start);
                sum -= arr[start++];
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        cout << obj.smallestSubWithSum(a, n, x) << endl;
    }
    return 0;
} // } Driver Code Ends