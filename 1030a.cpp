#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int s = 0;
    for (int i = 0 ; i < n ; i++){
        cin >> a[i];
        s+=a[i];
    }
    if(s==0)
        cout << "EASY";
    else
        cout << "HARD";
}