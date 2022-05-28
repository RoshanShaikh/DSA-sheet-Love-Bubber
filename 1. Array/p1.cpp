// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << reverseWord(s) << endl;
    }
    return 0;
}

// } Driver Code Ends

// User function Template for C++

string reverseWord(string str)
{

    // Your code here
    string ans = "";
    int n = str.size();
    for (int i = n - 1; i >= 0; i--)
    {
        ans.push_back(str[i]);
    }
    return ans;
}