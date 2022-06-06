// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<int> nextPermutation(int n, vector<int> arr)
    {
        // code here
        int i = n - 2;
        while (i >= 0 && arr[i] >= arr[i + 1])
        {
            i--;
        }
        int j = n - 1;
        while (i >= 0 && arr[j] <= arr[i])
            j--;
        if (i >= 0 && j >= 0)
            swap(arr[i++], arr[j++]);
        else
        {
            i++;
            j++;
        }
        reverse(arr.begin() + i, arr.end());
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
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
            cin >> arr[i];

        Solution ob;
        vector<int> ans = ob.nextPermutation(N, arr);
        for (int u : ans)
            cout << u << " ";
        cout << "\n";
    }
    return 0;
} // } Driver Code Ends