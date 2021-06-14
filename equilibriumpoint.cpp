#include <iostream>
using namespace std;
int equ(int a[], int n)

{

    int sum = 0;

    for (int i = 0; i < n; i++)

        sum += a[i];

    int leftsum = 0;

    for (int i = 0; i < n; i++)

    {

        if (leftsum == (sum - a[i]))
            return a[i];

            leftsum += a[i];
             sum -= a[i];
    }

    return -1;
}

int main()
{

    int a[6] = {3, 4, 8, -9, 20, 6};

    std::cout << equ(a, 6);

    return 0;
}