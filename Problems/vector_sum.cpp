#include<bits/stdc++.h>
using namespace std;
void input(vector<vector<int>> &m1,int row,int col)
{
   for(int i=0;i<row;i++)
    {
        vector<int> temp;
        for(int j=0;j<col;j++)
        {
            int n;
            cin>>n;
            temp.push_back(n);
        }
        m1.push_back(temp);
    }
}

void show(vector<vector<int>>m1)
{
    for(auto i:m1)
    {
        for(auto j:i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> sum(vector<vector<int>>m1,vector<vector<int>>m2,vector<vector<int>>m3)
{
    for(int i=0;i<m1.size();i++)
    {
        vector<int> temp;
        for(int j=0;j<m2.size();j++)
        {
           temp.push_back(m1[i][j]+m2[j][j]);
        }
        m3.push_back(temp);
    }
    return m3;
}

int main()
{
    vector<vector<int>> m1;
    vector<vector<int>> m2;
    vector<vector<int>> m3;
    
   input(m1,3,3);
   input(m2,3,3);

   m3=sum(m1,m2,m3);
   show(m3);

   

}