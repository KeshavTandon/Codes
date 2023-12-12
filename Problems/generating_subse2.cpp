#include<bits/stdc++.h>
using namespace std;
bool printS(int ind,vector<int> &ds,int s,int sum,int n,int arr[])
{
    if(ind==n)  //Base Case:- printing the subsequence if the s matches the given target
    {
        if(s==sum)
        {
            for(auto it:ds)
            {
                 cout  << it << " ";
            }
            cout << endl;   
            return true;       
        }
        else return false;
    }

    ds.push_back(arr[ind]);
    s+=arr[ind];
   if(printS(ind+1,ds,s,sum,n,arr)==true) return true;

    s-=arr[ind];
    ds.pop_back();
   if(printS(ind+1,ds,s,sum,n,arr)==true) return true;

   return false;

}
int main()
{
    int arr[]={2,3,5,6,8,10};
    int target=10;
    vector<int> ds;
    printS(0,ds,0,10,6,arr);
}