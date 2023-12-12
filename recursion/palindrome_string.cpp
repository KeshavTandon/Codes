#include<bits/stdc++.h>
using namespace std;
int string_check(int index,string s,int n)
{
    if(index>=n/2)
    {
        return 1;
    }
    if(s[index]!=s[n-index-1])
    {
        return 0;
    }
    else
    {
        string_check(index+1,s,n);
    }
}
int main()
{
    string s="";
    int x=string_check(0,s,4);
    if(x==0) cout << "false";
    else cout << "true";
}