#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int i = nums.size() - 2;
        while (i >= 0 && nums[i] >= nums[i + 1])
        {
            i--;
        }
        if (i >= 0)
        {
            int j = nums.size() - 1;
            while (j > i && nums[i] >= nums[j])
            {
                j--;
            }
            swap(nums[i], nums[j]);
        }
        reverse(nums, i + 1);
    }
    void reverse(vector<int> &v, int start)
    {
        int end = v.size() - 1;
        while (start < end)
        {
            swap(v[start++], v[end--]);
        }
    }
};

int main()
{

    return 0;
}