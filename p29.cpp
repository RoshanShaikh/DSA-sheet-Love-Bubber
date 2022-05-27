// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution
{

    // Function to find the trapped water between the blocks.
public:
    long long trappingWater(int arr[], int n)
    {
        // code here
        /* Dynamic Programming
        int prefix[n];
        int max = arr[0];
        for (int i = 0; i < n; i++)
        {
            max = std::max(max, arr[i]);
            prefix[i] = max;
        }
        max = arr[n - 1];
        int suffix[n];
        for (int i = n - 1; i >= 0; i--)
        {
            max = std::max(max, arr[i]);
            suffix[i] = max;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
            ans += min(prefix[i], suffix[i]) - arr[i];

        return ans;
        */

        /* Two Pointer Approach */

        int rightmax = 0;
        int leftmax = 0;
        int left = 0, right = n - 1;
        int ans = 0;
        while (left < right)
        {
            if (arr[left] <= arr[right])
            {
                if (leftmax <= arr[left])
                    leftmax = arr[left];
                else
                    ans += leftmax - arr[left];
                left++;
            }
            else
            {
                if (rightmax <= arr[right])
                    rightmax = arr[right];
                else
                    ans += rightmax - arr[right];
                right++;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    // testcases
    cin >> t;

    while (t--)
    {
        int n;

        // size of array
        cin >> n;

        int a[n];

        // adding elements to the array
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        // calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
    }

    return 0;
} // } Driver Code Ends