#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        int current = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            current = prices[i] - prices[i - 1];
            if (current < 0)
                current = 0;
            profit = max(profit, current);
        }
        return profit;
    }
};

int main()
{

    return 0;
}