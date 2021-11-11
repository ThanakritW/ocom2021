#include<bits/stdc++.h>
using namespace std;
int n,k,t,c=2,exe;
bool p[1010];
int main(){
    cin >> n >> k;
    while(k){
        while(p[c]) c++;
        exe=c;
        while(exe<=n){
            if(p[exe]){
                exe+=c;
                continue;
            }
            p[exe]=1;
            k--;
            if(k==0){
                cout << exe;
                return 0;
            }
            exe+=c;
        }

    }
    return 0;
}