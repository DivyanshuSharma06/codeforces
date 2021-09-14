#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;
    int count=0;
    if(s.size()==t.size()){
        for(int i=0;i<s.size();i++){
            if(s[i]==t[s.size()-i-1]){
                count++;
            }
            else{
                cout << "NO";
                break;
            }
        }
    }
    else{
        cout << "NO";
    }
    if(count==s.size()){
        cout << "YES";
    }
}