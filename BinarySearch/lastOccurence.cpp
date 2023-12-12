#include <bits/stdc++.h>
using namespace std;
int lower(vector<int> &arr, int target)
{
    int low = 0, high = arr.size() - 1;
    int ans = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            low=mid+1;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {2, 4, 6, 8, 8, 8, 11, 13};
    cout << lower(arr, 8) << endl;
}