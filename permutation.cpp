#include <bits/stdc++.h>
using namespace std;
void swap(char *x, char *y)
{
    char *temp;
    temp = x;
    x = y;
    y = temp;
}

void permut(char s[], int l, int h)

{

    if (l >= h)
        cout << s << endl;

    for (int i =l; i <h; i++)
    {
        swap(s[i], s[l]);
        permut(s, l + 1, h);
        swap(s[i], s[l]);
    }
}

int main()
{
    char s[] = "ABC";
    permut(s, 0, 3);
    return 0;
}