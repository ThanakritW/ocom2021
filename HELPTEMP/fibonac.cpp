#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,f[100100];
int fibo(int m){
    if(f[m]!=0) return f[m];
    return fibo(m-1)+fibo(m-2);
}
main(){
    f[1]=1;
    f[2]=1;
    cin >> n;

    cout << fibo(n);
}
