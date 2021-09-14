#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int q=0;
    int a[3];
    cin >> n;
    while(n--){
        int count = 0;
        cin >> a[0];
        cin >> a[1];
        cin >> a[2];
        for(int i = 0;i < 3;i++){
            if(a[i] == 1){
                count++;
            }
        }
        if(count >= 2){
            q++;
        }
    }
    cout << q;
}