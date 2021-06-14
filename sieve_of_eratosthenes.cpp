#include <bits/stdc++.h>
#include <vector>
using namespace std;

void sieve(int n)
{
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
            for (int j = 2 * i; j < n; j = j + i)
                isPrime[j] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (isPrime[i])
            cout << i << " ";
    }
}

int main()
{
    int x = 47;
    sieve(x);
    return 0;
}