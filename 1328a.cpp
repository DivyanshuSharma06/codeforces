#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y, z;
        cin >> x >> y;
        z= x % y;
        if(x%y!=0)
            cout << y - z << endl;
        else
            cout << 0 << endl;
    }
}
