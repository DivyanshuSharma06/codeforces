#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k;
    cin >> n;
    cin >> w;
    int sum=0;
    for(int i=1;i<=w;i++){
        sum = sum + (i*k);
    }
    int b;
    b = n - sum;
    if(b < 0)
        cout << abs(b);
    else{
        cout << "0";
    }
}