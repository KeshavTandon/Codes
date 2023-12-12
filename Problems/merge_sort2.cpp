#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int start,int mid,int end)
{
    vector<int> temp;
    int left=start;
    int right=mid+1;
    while(left<=mid && right <=end)
    {
        if(arr[left]<=arr[right])
        {
            temp.push_back(arr[left++]);
        }
        else{
             temp.push_back(arr[right++]);
        }
    }
    if(arr[left]<=mid)
    {
        while(left<=mid)
        {
             temp.push_back(arr[left++]);
        }
    }
    
    if(arr[right]<=end)
    {
        while(right<=end)
        {
             temp.push_back(arr[right++]);
        }
    }

    for(int i=start;i<=end;i++)
    {
       arr[i]=temp[i-start]; 
    }
}
void mergeSort(int *arr,int start,int end)
{
    if(start>=end)
    return;
    
    int mid=start+(end-start)/2;
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,mid,end);

}
int main()
{
    cout << "Enter the size of array";
    int n;
    cin>>n;
    int arr[n];
    cout << "Enter the elements of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergeSort(arr,0,n-1);
     for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}