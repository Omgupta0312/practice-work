#include <iostream>
using namespace std;

int jos(int n, int k)
{
    if (n == 1)
        return 0;
    else
        return (jos(n - 1, k) + k) % n;
}

int main()
{
    cout << "Enter no.of people in game and which person to kill " << endl;
    int n, k;
    cin >> n >> k;
    cout << jos(n, k);
    return 0;
}
