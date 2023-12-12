#include<bits/stdc++.h>
using namespace std;
char occurence(string s)
{
    int arr[26]={0};
    int n=s.length();
    for(int i=0;i<n;i++)
    {
        char ch=s[i];
        int number=0;
        number=ch-'a';
        arr[number]++;
    }

    int maxi=-1;
    int ans=0;
    for(int i=0;i<26;i++)
    {
        if(maxi<arr[i])
        {
            ans=i;
            maxi=arr[i];
        }

    }
    ans=ans+'a';
    return ans;
}
int main()
{
    string s;
    cin >> s;
   cout <<  occurence(s);

}