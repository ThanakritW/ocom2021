#include<bits/stdc++.h>
using namespace std;
struct qu{
    int in,va;
};
bool cmp1(qu a,qu b){
    return a.va<b.va;
}
bool cmp2(qu a,qu b){
    return a.in<b.in;
}
int n,ta,tb,q,d[200010],cnt;
qu a[200010];
main(){
    cin >> n;
    d[0]=0;
    for(int i=1;i<=n;i++){
        cin >> ta >> tb;
        d[i]=d[i-1]+ta+tb;
    }
    cin >> q;
    for(int i=0;i<q;i++){
        cin >> ta;
        a[i]={i,ta};
    }
    sort(a,a+q,cmp1);
    cnt=0;
    for(int i=1;i<=n;i++){
        if(cnt==q) break;
        while(a[cnt].va<d[i] && cnt<q){
            a[cnt].va=i-1;
            cnt++;
        }
    }
    sort(a,a+q,cmp2);
    for(int i=0;i<q;i++){
        cout << a[i].va << '\n';
    }
}
