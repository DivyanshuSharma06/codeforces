#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count=0;
    for(int i=0;i<s.size();i++){
        int j;
        for(j=0;j<s.size();j++){
            if(s[i]==s[j])
                break;
        }
        if(i==j)
            count++;
    }
    if(count%2==0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
}