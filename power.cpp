#include <iostream>
using namespace std;

int pow(int x, int n)
{
    if (n == 0)
        return 1;
    int temp = pow(x, n / 2);
    temp = temp * temp;
    if (n % 2 == 0)
        return temp;
    else
        return temp * x;
}

int main()
{
    cout << pow(5, 6);
    return 0;
}