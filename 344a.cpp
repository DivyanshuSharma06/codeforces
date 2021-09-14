#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, count = 1;
    string b, c;
    cin >> a;
    cin >> b;
    for (int i = 0; i < a - 1; i++){
        cin >> c;
        if (b != c){
            count++;    
            b = c;
        }
    }
    cout << count;
}