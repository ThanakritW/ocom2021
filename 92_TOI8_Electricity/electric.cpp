#include<bits/stdc++.h>
using namespace std;
int n,k,t;
deque<pair<int,int>> dq;
int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> t;
        while(!dq.empty() && i-dq.front().first>k) dq.pop_front();
        while(!dq.empty() && t+dq.front().second<dq.back().second) dq.pop_back();
        dq.push_back({i,dq.front().second+t});
    }
    cout << dq.back().second;
    return 0;
}