#include <iostream>
using namespace std ;
int main()
{
    int arr[12] = {3, 4, 3, 4, 8, 4, 9, 32, 7, 9, 7, 4};
    int x = 0, re = 0, res = 0, n = 12;
    for (int i = 0; i < n; i++)
    {
        x = x ^ arr[i];
    }
    int s = x & ~(x - 1);
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & s) != 0)
            re = re ^ arr[i];
        else
            res = res ^ arr[i];
    }
    cout << re << "  " << res;
    return 0;
}
