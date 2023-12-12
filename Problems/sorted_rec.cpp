#include<bits/stdc++.h>
using namespace std;
bool fun(int arr[],int index)
{
    if(index==6)
    {
        return true;
    }
   return arr[index]<arr[index+1] && fun(arr,index+1);
}
int  main()
{
    int arr[6]={2,4,6,7,9,11};
    fun(arr,1)?cout << "sorted" :cout << "unsorted";   

}