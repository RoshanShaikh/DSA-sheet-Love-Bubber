#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
#define ll long long
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    ll merge(ll arr[], ll start, ll mid, ll end)
    {
        ll temp[end - start + 1];
        ll k = 0;
        ll i = start, j = mid + 1;
        ll count = 0;
        while (i < mid + 1 && j < end + 1)
        {
            if (arr[i] <= arr[j])
            {
                temp[k++] = arr[i++];
            }
            else
            {
                count = count + mid - i + 1;
                temp[k++] = arr[j++];
            }
        }
        while (i < mid + 1)
        {
            temp[k++] = arr[i++];
        }
        while (j < end + 1)
        {
            temp[k++] = arr[j++];
        }
        i = start;
        k = 0;
        while (i < end + 1)
        {
            arr[i++] = temp[k++];
        }
        return count;
    }

    ll mergeSort(ll arr[], ll start, ll end)
    {
        ll count = 0;
        ll mid = (start + end) / 2;
        if (start < end)
        {
            count += mergeSort(arr, start, mid);
            count += mergeSort(arr, mid + 1, end);
            count += merge(arr, start, mid, end);
        }
        return count;
    }

    ll inversionCount(ll arr[], ll N)
    {
        return mergeSort(arr, 0, N - 1);
    }
};

// { Driver Code Starts.

int main()
{

    long long T;
    cin >> T;

    while (T--)
    {
        long long N;
        cin >> N;

        long long A[N];
        for (long long i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}
// } Driver Code Ends