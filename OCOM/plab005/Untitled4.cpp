#include<bits/stdc++.h>
using namespace std;
string name[10010],sur[10010],tname[10010],tsur[10010];
long n,q,sc[10010],ans[10010];
main()
{
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> name[i] >> sur[i] >> sc[i];
    }
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> tname[i] >> tsur[i];
    }
    for(i=0;i<q;i++){
        for(int j=0; j<n; j++){
            if(tname[i]==name[j]){
                if(tsur[i]==sur[j]){
                    ans[i]=j;
                    break;
                }
            }
        }
    }
    for(int i=0;i<q;i++){
        cout << name[ans[i]] << " " << sur[ans[i]] << " " << sc[ans[i]];
        if(sc[ans[i]]>=80) cout << " A\n";
        else if(sc[ans[i]]>=70) cout << " B\n";
        else if(sc[ans[i]]>=60) cout << " C\n";
        else if(sc[ans[i]]>=50) cout << " D\n";
        else cout << " F\n";
    }
}
