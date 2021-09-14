#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x=0;
    int n;
    cin >> n;
    while(n--){
        string a;
        cin >> a;
        if(a == "++X" || a == "X++" ){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x;
}