#include<bits/stdc++.h>
using namespace std;
stack<long long> s;
long long ans,t,n,a[3050];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> n){
        if(n==0) break;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        ans=0;
        for(int i=0;i<n;i++){
            if(s.empty() || a[s.top()]<=a[i]){
                s.push(i);
            }
            else{
                while(!s.empty() && a[s.top()]>a[i]){
                    t=s.top(); 
                    s.pop();
                    ans=max(ans,a[t] * (s.empty() ? i : i - s.top() - 1));
                }
                i--;
            }
        }
        while(!s.empty()){
            t=s.top();
            s.pop();
            ans = max(ans,a[t] * (s.empty() ? n : n - s.top() - 1));
        }
        cout << ans << '\n';
    }
    return 0;
}
