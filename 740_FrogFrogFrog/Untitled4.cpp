#include <bits/stdc++.h>
using namespace std;

long long d[505][505];

int nq;

long long fn(int x,int y)
{
    if(x == 0)return 1;
    if(x < 0)return 0;
    if(d[x][y])return d[x][y];
    for(int i=1;i<x+1;i++){
        if(i == y)continue;
        d[x][y] += fn(x-i,i)%99971;
    }
    return d[x][y];
}
int t;
int main()
{
    cin >> nq;
    for(int i=0;i<nq;i++){
        cin >> t;
        cout << fn(t-1,0)%99971 << "\n";
    }
}
