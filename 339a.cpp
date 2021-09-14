#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector <char> c;
    int n=s.size();
    for(int i=0;i<n;i+=2){
        c.push_back(s[i]);
    }
    sort(c.begin(), c.end());
    int j=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout << c[j];
            j++;
        }
        else{
            cout << "+";
        }
    }
}