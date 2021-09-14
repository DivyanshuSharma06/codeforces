#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b = 0;
    cin >> a;
    int s[a];
    for (int i=0;i<a;i++){
        cin >> s[i];
        b+=s[i];
    }
    double f = ((double)b/(double)a);
    cout << fixed << setprecision(12) << f << endl;
}