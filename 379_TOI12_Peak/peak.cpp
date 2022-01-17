#include<iostream>
#include<set>
using namespace std;
int n,m,a[5000010];
set<int> s;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            s.insert(a[i]);
        }
    }
    if(s.empty()){
        cout << -1; return 0;
    }
    if(s.size()>=m){
        int cnt=0;
        for(auto e=s.end();e!=s.begin();e=e){
            cout << *(--e) << '\n';
            if(++cnt==m) break;
        }
    }else{
        for(auto e=s.begin();e!=s.end();e++){
            cout << *e << '\n';
        }
    }
    return 0;
}