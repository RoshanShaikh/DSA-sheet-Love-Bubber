// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    // Function to find if there exists a triplet in the
    // array A[] which sums up to X.
    bool find3Numbers(int a[], int n, int X)
    {
        // Your Code Here
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && a[i] == a[i - 1])
                continue;
            int target = X - a[i];
            int j = i + 1, k = n - 1;
            while (j < k)
            {
                if (a[j] + a[k] == target)
                    return true;
                if (a[j] + a[k] < target)
                    j++;
                else
                    k--;
            }
        }
        return false;
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, X;
        cin >> n >> X;
        int i, A[n];
        for (i = 0; i < n; i++)
            cin >> A[i];
        Solution ob;
        cout << (ob.find3Numbers(A, n, X) ? "true" : "false") << endl;
    }
}
// } Driver Code Ends