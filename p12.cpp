// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
    void printArray(int a[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }

public:
    void merge(int a1[], int a2[], int n, int m)
    {
        // code here
        /*
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (a1[i] > a2[j])
            {
                swap(a1[i], a2[j]);
                int k = j;
                while (a2[k] > a2[k + 1])
                {
                    swap(a2[k], a2[k + 1]);
                    k++;
                }
            }

            i++;
        }
        */
        int i = n - 1;
        int j = 0;
        while (i >= 0 && j < m)
        {
            if (a1[i] > a2[j])
                swap(a1[i], a2[j]);
            i--;
            j++;
        }
        sort(a1, a1 + n);
        sort(a2, a2 + m);
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, i;
        cin >> n >> m;
        int arr1[n], arr2[m];
        for (i = 0; i < n; i++)
        {
            cin >> arr1[i];
        }
        for (i = 0; i < m; i++)
        {
            cin >> arr2[i];
        }
        Solution ob;
        ob.merge(arr1, arr2, n, m);
        for (i = 0; i < n; i++)
        {
            cout << arr1[i] << " ";
        }
        for (i = 0; i < m; i++)
        {
            cout << arr2[i] << " ";
        }
        cout << "\n";
    }
    return 0;
} // } Driver Code Ends