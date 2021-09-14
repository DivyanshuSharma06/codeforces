#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
//97 - 122
int main(){
    char a[10000];
    gets(a);
    int n = strlen(a);
    sort(a, a+n);
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > 96 && a[i] < 123){
            count++;
            if(a[i] == a[i+1]){
                count--;
            }
        }
    }
    cout << count;
}
