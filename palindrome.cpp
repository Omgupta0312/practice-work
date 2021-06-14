#include <bits/stdc++.h>
using namespace std;

int ispalindrome(string &s, int start, int end)
{
    if (start > end)
        return 1;

    return (s[start] == s[end] && ispalindrome(s, start + 1, end - 1));
}

int main()
{
    string s = "MADAM";
    cout << ispalindrome(s, 0, 4);
    return 0;
}
