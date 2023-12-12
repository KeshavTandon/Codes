#include<bits/stdc++.h>
using namespace std;
int func(int mid,int num,int m)
{
    long long ans=1;
    for(int i=1;i<=m;i++)
    {
        ans*=mid;
        if(ans>num) return 1;
    }
    if(ans==num) return 0;
    else return 2;
}
int nthRoot (int num,int m)
{
    int low=1,high=m;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        int midNum = func(mid, num, m);
        if(midNum == 0) return mid;
        if(midNum==1) //greater
        high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int main()
{
    cout << nthRoot(27,3) << endl;
}