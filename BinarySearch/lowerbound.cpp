#include<bits/stdc++.h>
using namespace std;
int lower(vector<int>&arr,int target)
{
    int low=0,high=arr.size()-1;
    int ans=arr.size();
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=target)
        {
            ans=mid;
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<int>arr={1,2,3,4,5,6,7,8,9,10};
    cout << lower(arr,-5) << endl;
}