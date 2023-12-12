// Q Given an array,calculate first negative integer of each subarray of size k
#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], int &k, int size)
{
    deque<int> dq; //for maintaining the order
    // traversing the first window
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            dq.push_back(i);
        }
    }
    // printing the negative element of first window if it exists
    if (dq.empty())
        cout << 0 << " ";
    else
        cout << arr[dq.front()] << " ";

    // traversing the whole array for new negative elements
    for (int i = k; i < size; i++)
    {
        int add = i;
        int sub = i - k;
        if (sub == dq.front()) // no longer part of window
        {
            dq.pop_front();
        }
        if(arr[add]<0)
        {
            dq.push_back(add);
        }
        if (dq.empty())
            cout << 0 << " ";
        else
            cout << arr[dq.front()] << " ";
    }
}
int main()
{
    int arr[] = {-3,2,7,-1,2,-3,5,8,9};
    int k = 3;
    solve(arr, k, 9);
}