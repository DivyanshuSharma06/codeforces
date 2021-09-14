#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> a[i][j];
        }
    }
    int n, m;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if(a[i][j]==1){
                n=abs(2-i);
                m=abs(2-j);
            }
        }
    }
    cout << n+m;
}