#include<bits/stdc++.h>
using namespace std;
long mod(string a,long b){
    long ans=0;
    for(int i=0;i<a.length();i++){
        ans=(ans*10 + (long)a[i]-'0')%b;
    }
    return ans;
}

long x;
string num;
main(){
    cin >> num >> x;
    cout << mod(num,x);
}
