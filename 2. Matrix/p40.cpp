// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution
{
public:
	int rowWithMax1s(vector<vector<int>> arr, int n, int m)
	{
		// code here
		int ans = 0, max1s = 0;
		/*
		for (int i = 0; i < n; i++)
		{
			int j = 0;
			while (arr[i][j] == 0 && j < m)
				j++;
			int no1s = m - j;
			if (no1s > max1s)
			{
				ans = i;
				max1s = no1s;
			}
		}
		*/

		// Using Binary search
		int start = 0, end = m - 1;
		for (int i = 0; i < n; i++)
		{
			while (start <= end)
			{
				int mid = (start + end) / 2;
				if ((mid == 0 || arr[i][mid - 1] == 0) && arr[i][mid] == 1)
				{
					int no1s = m - mid;
					if (no1s > max1s)
					{
						ans = i;
						max1s = no1s;
					}
					break;
				}
				else if (arr[i][mid] == 0)
				{
					start = mid + 1;
				}
				else
				{
					end = mid - 1;
				}
			}
		}
		return ans;
	}
};

// { Driver Code Starts.
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, m;
		cin >> n >> m;
		vector<vector<int>> arr(n, vector<int>(m));
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				cin >> arr[i][j];
			}
		}
		Solution ob;
		auto ans = ob.rowWithMax1s(arr, n, m);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends