#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char>s;
    string str="keshav";
    for(int i=0;i<str.size();i++)
    {
        char ch=str[i];
        s.push(ch);
    }
    string ans="";
   while(!s.empty())
    {
        cout << s.top();
        s.pop(); //pop returns nothing
    }
}