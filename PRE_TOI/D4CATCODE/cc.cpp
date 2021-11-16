#include<bits/stdc++.h>
using namespace std;
map<int,int> cat;
int n,m,q,num,nc;
string s;
bool save,f[100100];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> nc >> m;
    for(int i=0;i<nc;i++){
        cin >> s;
        num=0;
        for(int j=0;j<m;j++)
            num+=((s[j]-'0')*(1<<j));
        cat[num]=i+1;
    }
    cin >> q;
    for(int k=0;k<q;k++){
        cin >> n;
        cin >> s;
        num=0;
        save=1;
        for(int i=0;i<=nc;i++) f[i]=0;
        for(int i=0;i<m;i++)
            num+=((s[i]-'0')*(1<<i));
        for(int i=0;i<n-m+1;i++){
            if(i){
                num=num>>1;
                num+=((s[i+m-1]-'0')*(1<<(m-1)));
            }
            if(cat[num]){
                f[cat[num]]=1;
                save=0;
            }
        }
        if(save) cout << "OK";
        else
            for(int i=0;i<=nc;i++)
                if(f[i]) cout << i << " ";
        cout << '\n';
    }
    return 0;
}