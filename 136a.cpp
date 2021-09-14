#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s[n];
    for (int i = 0; i < n; i++){
        cin >> s[i];
    }
    int s1[n];
    for (int i=0;i<n;i++){
        s1[s[i]-1]=i+1;
    }
    for (int i = 0; i < n; i++){
        cout << s1[i] << " ";
    }
}