#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        for (int i = matrix.size() - 1; i >= 0; i--)
        {
            if (matrix[i][0] <= target && matrix[i][matrix[0].size() - 1] >= target)
                return binary_search(matrix[i].begin(), matrix[i].end(), target);
        }
        return false;
    }
};

int main()
{

    return 0;
}