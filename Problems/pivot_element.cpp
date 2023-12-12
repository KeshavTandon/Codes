#include<bits/stdc++.h>
using namespace std;
int pivotElement(int arr[],int n)
{
  int start=0;
  int end=n-1;
  int mid=start+(end-start)/2;
  while(start<=end)
  {
    if(start==end) return start;
    if(arr[mid]>arr[mid+1]) return mid;
    if(arr[mid-1]>arr[mid]) return mid-1;

    else if(arr[start]>arr[mid]) end=mid-1;
    else start=mid+1;

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

   int x= pivotElement(arr,n);
   cout << "Pivot element is" <<" " <<  arr[x] << endl;
}