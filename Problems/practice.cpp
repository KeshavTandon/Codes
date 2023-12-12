#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>v{
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    for(auto it:v)
    {
        for(int i=0;i<it.size();i++)
        {
            cout << it[i] << " ";
        }
        cout << endl;
    }
}
