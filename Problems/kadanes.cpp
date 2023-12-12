#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&v)
{
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<v.size();i++)
    {
        sum+=v[i];
        maxi=max(maxi,sum);
        if(sum<0)
        {
            sum=0;
        }
    }
    cout << maxi << endl;
}
int main()
{
    vector<int>v={-10,-5,-9,-1};
    solve(v);
}