#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A')
            c++;
        else
            c--;
    }
    if(c>0)
        cout << "Anton";
    else if(c<0)
        cout << "Danik";
    else
        cout << "Friendship";
}