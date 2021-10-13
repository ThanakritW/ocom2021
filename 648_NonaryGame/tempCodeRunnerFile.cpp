#include<bits/stdc++.h>
using namespace std;
long long n,temp,c;
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        c=i%9;
        if(c==0) c=9;
        cout << c << '\n';
    }
    return 0;
}