#include<bits/stdc++.h>
using namespace std;
int n,lc;
string gsp,t;
main(){
    cin >> n;
    cin >> gsp;
    for(int k=0;k<n;k++){
        cin >> t;
        if(t.size()<gsp.size()-1){
            cout << "No\n";
            continue;
        }
        lc=0;
        for(int i=0;i<t.length();i++){
            if(gsp[i]=='*'){
                lc=1;
                break;
            }
            else if(gsp[i]!=t[i]){
                cout << "No\n";
                break;
            }
        }
        if(lc){
            for(int i=1;i<=t.length();i++){
                if(gsp[gsp.size()-i]=='*'){
                    cout << "Yes\n";
                    break;
                }
                else if(gsp[gsp.size()-i]!=t[t.size()-i]){
                    cout << "No\n";
                    break;
                }
            }
        }

    }

}
