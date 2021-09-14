#include <bits/stdc++.h>
using namespace std;

bool isUnique(int year){
    vector<int> c;
    int y = year;
    while(year > 0) {
        c.push_back(year%10);
        year/=10;
    }

    sort(c.begin(),c.end());

    for(int i=0;i<3;i++) {
        // cout<<c[i]<<" "<<c[i+1]<<endl;
        if(c[i] == c[i+1]) {
            // cout<<"Inside condition"<<endl;
            return false;
        }
    }

    // cout<<"Year found "<<y<<endl;
    return true;
}

int main()
{
    int y;
    cin >> y;    
    y++;
    while(!isUnique(y)) {
        // cout<<y<<endl;
        y++;
    }

    cout<<y<<endl;
}
