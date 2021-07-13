#include<bits/stdc++.h>
using namespace std;
int cnt;
string a,b;
bool f;
main(){
    while(cin >> a >> b){
        cnt=0;
        for(int i=0;i<a.size();i++){
            f=1;
            for(int j=0;j<b.size();j++){
                if(a[i]!=b[j]){
                    f=0;
                    break;
                }
            }
            if(f) cnt++;
        }
        cout << cnt << '\n';
    }
}