#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int count=0;
    while(x>0){
        if(x>5){
            count++;
            x-=5;
        }
        else{
            count++;
            x=0;
            break;
        }
    }
    cout << count;
}