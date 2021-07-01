#include<bits/stdc++.h>
using namespace std;
struct p{
    string name;
    int pt,in;
    bool friend operator<(p a,p b){
        if(a.pt==b.pt) return a.in>b.in;
        return a.pt<b.pt;
    }
};
priority_queue<p> q;
int cnt,n;
string cmd,name;
int main(){
    cnt=0;
    while(1){
        cin >> cmd;
        if(cmd =="Exit") break;
        else if(cmd=="New"){
            cin >> name >> n;
            q.push({name,n,cnt});
            cnt++;
        }
        else{
            cout << q.top().name<<'\n';
            q.pop();
        }
    }
    return 0;
}
