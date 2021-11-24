#include <bits/stdc++.h>
using namespace std;

long long n,t;
long long d[200005],j,tar;
int main()
{
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> n;
    for(long long i=0;i<n;i++)
    {
        cin >> t;
        j=1;
        while (i+j<=n)
        {
            long long tar = i+j;
            d[tar] = max(d[tar],d[i]+(j*t));
            j=j*2;
        }
    }
    cout << d[n];
}