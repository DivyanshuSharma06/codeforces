#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a = (int)s[0];
    if(a>96)
        a-=32;
        s[0] = (char)a;
    cout << s;
}