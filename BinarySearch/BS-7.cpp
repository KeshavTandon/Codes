//Q How many times array have been rotated
#include <bits/stdc++.h>
using namespace std;
int lower(vector<int> &nums, int target)
{
    int ans = INT_MAX;
    int index=INT_MAX;
    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[low] <= nums[high]) // optimisation
        {
            ans = min(ans, nums[low]);
            index=low;
            break;
        }
        if (nums[low] <= nums[mid])
        { // left part is sorted{
            ans = min(ans, nums[low]);
            index=low;
            low = mid + 1;
        }
        else
        { // right part is sorted
            ans = min(ans, nums[mid]);
            index=mid;
            high = mid - 1;
        }
    }
}
int main()
{
    vector<int> nums = {3,4,5,1,2};
    cout << lower(nums, 8) << endl;
}