#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    int count=1;
    while(a<b){
        a = 3*a;
        b = 2*b;
        if(a <= b){
            count++;
        }
        else{
            break;
        }
    }
    cout << count;
}