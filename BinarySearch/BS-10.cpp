#include <bits/stdc++.h>
using namespace std;
int answer(int n)
{
    int low = 1, high = n;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid * mid <= n)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return high;
}
int main()
{
    cout << answer(1000000) << endl;
}