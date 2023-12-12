#include<bits/stdc++.h>
using namespace std;
bool search(int arr[],int k,int index,int n)
{
    if(index==n-1)
    return false;
    if(arr[index]==k)
    return true;
    else
    search(arr,k,index+1,n);
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
     search(arr,k,0,n)?cout << "element is present":cout << "element not present" << endl;


}