#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   vector<int>arr={1,2,3,4,5,6,7,8,10};
   int n=arr.size();
   sort(arr.begin(),arr.end());
      int start=arr[0];
      int end=arr[n-2];
      while(start<=end)
      {
          int mid=start+(end-start)/2;
          if(arr[mid]-arr[mid-1]==1)
          start=mid+1;
          else if(arr[mid+1]-arr[mid]==1)
          end=mid-1;
          else{
          cout<< mid+1 << endl;
          break;
          }
      }
}