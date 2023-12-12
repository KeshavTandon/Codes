#include<bits/stdc++.h>
using namespace std;
void swapped(int index,int arr[],int n)
{
    int temp=arr[index];
    arr[index]=arr[n];
    arr[n]=temp;
}
void reverse(int index,int arr[],int n)
{
 if(index>=n/2)
 {
    return;
 }
 swapped(index,arr,n-index-1);
 reverse(index+1,arr,n);
}
int main()
{
    int arr[]={2,3,4,5,9};
    reverse(0,arr,5);
    for(int i=0;i<5;i++)
    cout << arr[i] << " ";
}