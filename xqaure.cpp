#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int k=s.size();
        char hsh[128]={0};
		for(int i=1;i<=k;i++)
		{
			hsh[s[i]-'0']++;
		}
       
		int c=0;
		for(int i=1;i<=128;i++)
		{
			if(hsh[i]==2)
			{
				c=1;
				break;
			}
		}
		if(c==1)
		cout << "Yes" << endl;
		else
		cout << "No" << endl;
	}
}