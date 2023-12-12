#include<bits/stdc++.h>
using namespace std;
void bubble(int arr[],int r,int c)
{
    if(r==0)
    return;

    if(r>c)
    {
        if(arr[c]>arr[c+1])
        {
            swap(arr[c],arr[c+1]);
        }
        bubble(arr,r,c+1);
    }
    else{
        bubble(arr,r-1,0);
    }
}
int main()
{
  int arr[]={10,11,3,5,1,8,11};
  bubble(arr,7,0);

  for(int i=0;i<7;i++)
  {
    cout << arr[i] << " ";
  }
}