#include<bits/stdc++.h>
using namespace std;
long long fibo(int a){
    if(a==1 || a==2) return 1;
    if(a==0) return 0;
    return fibo(a-1)+fibo(a-2);
}
main(){
    int n;
    cin >> n;
    cout << fibo(n);
}
