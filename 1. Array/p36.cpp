#include <bits/stdc++.h>
using namespace std;

int getMedian(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    int m1 = -1, m2 = -1;
    for (int count = 0; count <= (m + n) / 2; count++)
    {
        m2 = m1;
        if (i != n && j != m)
            m1 = (a[i] > b[j]) ? a[i++] : b[j++];
        else if (i < n)
            m1 = a[i++];
        else
            m1 = b[j++];
    }
    if ((m + n) % 2 == 0)
        return (m1 + m2) / 2;
    else
        return m1;
}

int main()
{

    return 0;
}