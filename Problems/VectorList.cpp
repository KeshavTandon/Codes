#include<bits/stdc++.h>
using namespace std;
vector<int> fun(int arr[],int k,int index,int n,vector<int> brr)
{
    if(index==n-1)
    return brr;
    if(arr[index]==k)
    brr.push_back(index);
    return fun(arr,k,index+1,n,brr);
}
int main()
{
    cout<<"Enter size" << endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements" << endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     cout<<"Enter the element you want to search" << endl;
     int k;
     cin>>k;
     vector<int> brr;
     vector<int> crr=fun(arr,k,0,n,brr);
     for(int i=0;i<crr.size();i++)
     cout << crr[i] << " " << endl;
}