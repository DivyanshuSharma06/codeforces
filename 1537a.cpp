#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n;
    cin >> t;
    for(int i=0;i<t;i++){
        cin >> n;
        int a[n];
        for(int j=0;j<n;j++){
            cin >> a[j];
        }
        int s = 0;
        for (int j = 0; j < n; j++){
            s=s+a[j];
        }
        int add = 0;
        if(s>n){
                add = s - n;
                cout << add << endl;
            }
        else  if(s<n){
            cout << "1" << endl;
        }
        else{
            cout << "0" << endl;
        }
    }    
}