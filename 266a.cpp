#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    int c1=0;
    int c2=0;
    bool ok=false;
    for(int i=0;i<n-1;i++){
       if(s[i]==s[i+1]){
            c1++;
            c2++; 
        }  
        else{
            c1 = 0;
            ok = true;
        }
        
    }
    if(ok==true)
        cout << c2;
    else
        cout << c1;
}