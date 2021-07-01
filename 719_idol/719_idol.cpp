#include<bits/stdc++.h>
using namespace std;
struct node{
    int n,w;
    bool friend operator< (node a, node b){
        return a.w<b.w;
    }
};
node c;
int n,x[12350],y[12350];
vector<int> d[12350];
bool f[12350];
priority_queue<node> q;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x[i] >> y[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j)
                d[i].push_back(max(abs(x[i]-x[j]),abs(y[i]-y[j])));
            else d[i].push_back(-1);
        }
    }
    q.push({0,0});
    int cnt=0;
    while(!q.empty()){
        c=q.top();
        q.pop();
        if(f[c.n]) continue;
        else if(cnt==n-1){
            cout << c.w;
            return 0;
        }
        else{
            f[c.n]=1;
            for(int i=0;i<n;i++){
                if(!f[i]){
                    q.push({i,c.w+d[c.n][i]});
                }
            }
       }
        cnt++;
    }
}
