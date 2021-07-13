#include<bits/stdc++.h>
using namespace std;
int q,n,t,ans;
string s;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> q;
    for(int k=0;k<q;k++){
        cin >> n;
        int pnt=0;
        for(int i=0;i<n;i++){
            cin >> s >> t;
            if(s=="WA" || s=="TLE") pnt+=20;
            else{
                ans=t+pnt;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}