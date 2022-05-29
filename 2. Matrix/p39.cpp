// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    void merge2Array(vector<int> &a, vector<int> &b)
    {
        int i = a.size() - 1;
        int j = 0;
        while (i >= 0 && j < b.size())
        {
            if (a[i] > b[j])
                swap(a[i], b[j]);
            i--;
            j++;
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
    }
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
        // code here
        for (int i = 0; i < arr.size(); i += 2)
        {
        }
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        vector<vector<int>> arr(k, vector<int>(k, 0));
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < k; j++)
            {
                cin >> arr[i][j];
            }
        }
        Solution obj;
        vector<int> output = obj.mergeKArrays(arr, k);
        printArray(output, k * k);
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends