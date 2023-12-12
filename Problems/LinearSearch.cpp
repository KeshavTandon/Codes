#include<bits/stdc++.h>
using namespace std;
int Binary(int arr[],int n,int target,int left,int right,int mid)
{
    if(left>right)
    return -1;
    mid=(left+right)/2;
    if(arr[mid]==target) return mid+1;
    if(arr[mid]>target)
    {
        Binary(arr,n,target,left,mid-1,mid);
    }
    else
    Binary(arr,n,target,mid+1,right,mid);
}
int Linear(int arr[],int n,int target,int index)
{
    if(index==n)
    {
        return -1;
    }
    else if(arr[index]==target) return index+1;
    return Linear(arr,n,target,index+1);
}
int main()
{
    int arr[]={1,2,3,4,5,8};
   int x= Linear(arr,6,3,0);
   cout << x << endl;
   int y= Binary(arr,6,3,0,5,0);
   cout << y << endl;

}