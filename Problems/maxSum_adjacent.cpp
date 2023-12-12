#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>&arr,int i,int sum,int &maxi)
{
    if(i>=arr.size())
    {
     maxi=max(sum,maxi);
     return;
    }

    //exclude  
    solve(arr,i+1,sum,maxi);

    //include
    solve(arr,i+2,sum+=arr[i],maxi);

}
int main()
{
    vector<int>arr{1,2,3,4};
    int maxi=INT_MIN;
    int i=0;
    int sum=0;
    solve(arr,i,sum,maxi);
    cout << maxi << endl;
}