#include <bits/stdc++.h>
using namespace std;

int isprime(int n)
{
    if (n == 0 || n == 1)
        return 0;
    if (n == 2 || n == 3)
        return 1;
    if (n % 2 == 0 || n % 3 == 0)
        return 0;

    for (int i = 5; i * i <= n; i = 6 + i)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int x = 23;
    cout << isprime(x);
    return 0;
}