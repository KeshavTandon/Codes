#include<bits/stdc++.h>
using namespace std;
int  nearlySorted(int arr[],int n,int target)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==target) return mid;
        if(arr[mid-1]==target) return mid-1;
        if(arr[mid+1]==target) return mid+1;
        if(arr[mid]>target) end=mid-2;
        else start=mid+2;

        mid=start+(end-start)/2;
    }
    return -1;
}

int main()
{
     cout << "Enter size" << endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout << "Enter the element to be searched" << endl;
    cin>>target;
    int x= nearlySorted(arr,n,target);
    x==-1?cout<<"Not found":cout<<"found at index "<< " " << x+1 << endl;

}