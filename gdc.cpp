#include <iostream>
using namespace std;

int gdc(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int gdc1(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gdc(b, a % b);
}

int main()
{
    int m, n;
    cout << "enter m and n";
    cin >> m >> n;
    cout << gdc(m, n);
    cout << endl
         << gdc1(m, n) << endl;
    return 0;
}