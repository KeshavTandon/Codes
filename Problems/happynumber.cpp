#include<bits/stdc++.h>
using namespace std;
bool isHappy(int n) {
        map<int,int>mp;
        int rem=0;
        int sum=0;
        int var=n;
        while(var>=9)
        {
            while(n!=0){
            rem=n%10;
            sum+=(rem*rem);
            cout << sum;
            n/=10;
            }
            if(mp.find(sum)!=mp.end()) return false;
            mp[sum] = 1;
            var=sum;
            n=sum;
        }
        if(var==1) return true;
        return false;
    }

    int main()
    {
        int n=19;
        bool l=isHappy(n);
        cout << l ;
    }