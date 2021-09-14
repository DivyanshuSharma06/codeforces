#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int u = 0;
    int l = 0;
    for(int i=0;i<s.size();i++){
        if ((int)s[i] >= 97 && (int)s[i] <= 122){
            l++;
        }
        else{
            u++;
        }
    }
    if(l>=u){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    else{
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    cout << s;
}