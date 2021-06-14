#include <bits/stdc++.h>
using namespace std;

void mcf(bool a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            if (a[i] != a[0])
                cout << "from " << i << " to ";
            else
                cout << i - 1 << endl;
        }
    }
    if (a[n - 1] != a[0])
        cout << n - 1 << endl;
}

int main()
{
    bool arr[] = {0, 0, 1, 1, 0, 1, 1, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    mcf(arr, n);
    return 0;
}