#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    long long int s = 0;
    if(n%2==0)
        s=n/2;
    else
        s=((n-1)/2)-n;
    cout << s;
}