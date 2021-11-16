#include<bits/stdc++.h>
using namespace std;
int n,m,q,t;
string cat[110000];
string s;
bool save;
set<int> fcat;
int main(){
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> cat[i];
    }
    cin >> q;
    for(int k=0;k<q;k++){
        cin >> t;
        cin >> s;
        save=1;
        fcat.clear();
        for(int i=0;i<n;i++){
            if(s.find(cat[i])!=string::npos){A
                cout << i+1 << " ";
                save=0;
            }
        }
        if(save) cout << "OK";
        cout << '\n';
    }
    return 0;
}