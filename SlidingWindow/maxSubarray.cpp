// Q given array find the sum of the elements of the elements of the subarray of size k with maxi sum.
//Fixed size window

#include<bits/stdc++.h>
using namespace std;
int solve(int arr[],int &k,int size)
{
    int sum=0,maxi=INT_MIN;
    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }
    maxi=max(sum,maxi);
    for(int i=k;i<size;i++)
    {
        int add=i;
        int sub=i-k;
        sum=sum+arr[add]-arr[sub];
        maxi=max(sum,maxi);
    }
    return maxi;
}
int main()
{
    int arr[]={1,2,3,4,5,10};
    int k=3;
    int ans=solve(arr,k,6);
    cout << ans << endl;
}
