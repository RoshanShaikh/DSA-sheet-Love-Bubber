#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    void sort012(int a[], int n)
    {
        // coode here
        int num_zero = 0;
        int num_one = 0;
        int num_two = 0;

        for (int i = 0; i < n; i++)
        {
            switch (a[i])
            {
            case 0:
                num_zero++;
                break;
            case 1:
                num_one++;
                break;
            case 2:
                num_two++;
                break;
            }
        }
        int j = 0;
        for (int i = 0; i < num_zero; i++)
        {
            a[j++] = 0;
        }
        for (int i = 0; i < num_one; i++)
        {
            a[j++] = 1;
        }
        for (int i = 0; i < num_two; i++)
        {
            a[j++] = 2;
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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends