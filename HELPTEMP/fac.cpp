#include<bits/stdc++.h>
using namespace std;
int fac(int a){
    if(a==1) return 1;
    return a*fac(a-1);
}
main(){
    int n;
    cin >> n;
    cout << fac(n);
}
