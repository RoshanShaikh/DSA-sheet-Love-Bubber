#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        /*  Using Set
        unordered_set<int> s;
        for (int i = 0; i < nums.size(); i++)
        {
            if (!(s.insert(nums[i])).second)
            {
                return nums[i];
            }
        }
        */

        /*  Using Map
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
            if (map[nums[i]] == 2)
                return nums[i];
        }
         */

        /* Using array
        int arr[nums.size()];
        for (int i = 0; i < nums.size(); i++)
        {
            arr[i] = 0;
        }

        for (int i = 0; i < nums.size(); i++)
        {
            arr[nums[i]]++;
            if (arr[nums[i]] == 2)
            {
                return nums[i];
            }
        }
         */

        /* Negative Marking
         */
        int dup = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[abs(nums[i])] < 0)
                dup = abs(nums[i]);
            nums[abs(nums[i])] *= -1;
        }
        for (auto &i : nums)
        {
            i = abs(i);
        }

        return dup;
    }
};

int main()
{
}