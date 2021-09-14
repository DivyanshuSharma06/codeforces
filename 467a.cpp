#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a;
    int b;
    int count = 0;
    while(n>0){
        int d[2];
        for(int i=0;i<2;i++){
            cin >> d[i];
        }
        a=d[0];
        b=d[1];
        if(b-a > 1){
            count++;
            n--;
        }
        else{
            n--;
        }
    }
    cout << count << endl;
}