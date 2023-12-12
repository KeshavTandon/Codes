#include <bits/stdc++.h>
using namespace std;
void sieve(int n)
{
    bool primes[n + 1];
    fill(primes, primes + n + 1, true);
    primes[0] = primes[1] = false;
    for (int i = 2; i<= n; i++) // O(N)
    {
        if (primes[i])
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j += i) //O(log log N) ~= constant(by divergence of sum of primes)
            {
                primes[j] = false;
            }
        }
    }
}
int main()
{
    sieve(100);
}