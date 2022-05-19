// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void segregateElements(int arr[], int n)
    {
        // Your code goes here
        int nneg = 0, npos = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
                nneg++;
            else
                npos++;
        }

        vector<int> neg(nneg);
        vector<int> pos(npos);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] < 0)
                neg.push_back(arr[i]);
            else
                pos.push_back(arr[i]);
        }

        int i = n - 1;
        while (i >= n - nneg)
        {
            arr[i--] = neg.back();
            neg.pop_back();
        }
        while (i >= 0)
        {
            arr[i--] = pos.back();
            pos.pop_back();
        }
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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        ob.segregateElements(a, n);

        for (int i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
// } Driver Code Ends