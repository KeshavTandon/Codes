#include<bits/stdc++.h>
using namespace std;
int length(char str[])
{
    int count=0;
    for(int i=0;str[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char str[20];
    cin >> str;
    cout << "Length is:"<< length(str) << endl;
    
}