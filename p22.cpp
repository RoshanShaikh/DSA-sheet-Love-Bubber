// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    vector<int> factorial(int N)
    {
        // code here
        vector<int> ans;
        ans.push_back(1);
        for (int i = 2; i <= N; i++)
        {
            multiply(ans, i);
        }
        int i = 0, j = ans.size() - 1;
        while (i < j)
            swap(ans[i++], ans[j--]);
        return ans;
    }

    void multiply(vector<int> &v, int x)
    {
        int carry = 0;
        int sum = 0;
        for (int i = 0; i < v.size(); i++)
        {
            sum = v[i] * x + carry;
            v[i] = sum % 10;
            carry = sum / 10;
        }
        while (carry > 0)
        {
            v.push_back(carry % 10);
            carry /= 10;
        }
    }
};

// { Driver Code Starts.

int main()
{

    vector<int> v = {4, 2};
    Solution().multiply(v, 5);
    v = Solution().factorial(5);
    for (auto &&i : v)
    {
        cout << i;
    }

    return 0;
} // } Driver Code Ends