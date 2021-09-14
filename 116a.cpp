#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    int b;
    int max = 0;
    int pass = 0;
    while(n--){
        int d[2];
        for(int i =0;i<2;i++){
            cin >> d[i];
        }
        a = d[0];
        b = d[1];
        pass = pass - a + b;
        if(max < pass){
            max = pass;
        }
    }
    cout << max;
}