#include<bits/stdc++.h>
using namespace std;
int binarySearch(int n)
{
  int start=0;
  int end=n;
  int mid=start+(end-start)/2;
  int ans=-1;
  while(start<=end)
  {
    int k=mid*mid;
     if(k==n)
     return mid;
     else if(k>n)
     end=mid-1;
     else
     {
        ans=mid;
        start=mid+1;
     }
    mid=start+(end-start)/2;
  }
  return ans;
}
int main()
{
    int n,prec;
    cout << "Enter the number" << endl;
    cin>>n;
    cout<< "Enter the precision" << endl;
    cin>>prec;
    int ans=binarySearch(n);
   
   double step=0.1;
   double final_ans=ans;
   for(int i=0;i<prec;i++)
   {
    for(double j=final_ans;j*j<n;j+=step)
    {
        final_ans=j;
    }
    step/=10;
   }
   printf("%.6f\n",final_ans); //set precision operator
}