#include <bits/stdc++.h>
using namespace std;

int main()
{
    //97-122 lower case
    //65-90 upper case
    string a;
    string b;
    cin >> a;
    cin >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if(a.compare(b)==1){
        cout << "1";
    }
    else if(a.compare(b)==0){
        cout << "0";
    }
    else{
        cout << "-1";
    }
}