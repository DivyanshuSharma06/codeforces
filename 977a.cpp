#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n;
    cin >> k;
    while(k--){
        int l = n % 10;
        if(l==0){
            n = n/10;
        }
        else{
            n-=1;
        }
    }
    cout << n;
}