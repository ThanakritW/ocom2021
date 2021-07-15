#include<bits/stdc++.h>
using namespace std;
int n,f,oa,oc,xr,xc,dr,dc,ansx,ansy;
string s[110];
int main(){
    cin >> n;
    for(int k=0;k<n;k++){
        for(int i=0;i<3;i++){
            cin >> s[i];
        }
        f=0;
        ansx=0;ansy=0;
        for(int i=0;i<3;i++){
            oa=0; oc=0;
            xr=0; xc=0;
            dr=0; dc=0;
            for(int j=0;j<3;j++){
                if(s[i][j]=='O') oa++;
                else if(s[i][j]=='X') xr++;
                else if(s[i][j]=='.'){
                    dr=j+1;
                }
                if(s[j][i]=='O') oc++;
                else if(s[j][i]=='X') xc++;
                else if(s[j][i]=='.'){
                    dc=j+1;
                }
            }
            if(oa==2 && dr!=0){
                cout << i+1 << " " << dr << '\n'; f=1;
                break;
            }
            if(oc==2 && dc!=0){
                cout << dc << " " << i+1 << '\n'; f=1;
                break;
            }
            if(xr==2 && dr!=0){
                ansx=i+1;
                ansy=dr;
            }
            if(xc==2 && dc!=0){
                ansy=i+1;
                ansx=dc;
            }
        }
        if(f) continue;
        oa=0; oc=0;
        xr=0; xc=0;
        dr=-1;dc=-1;
        for(int i=0;i<3;i++){
            if(s[i][i]=='O') oa++;
            else if(s[i][i]=='X') xr++;
            else if(s[i][i]=='.'){
                dr=i;
            }
            if(s[i][2-i]=='O') oc++;
            else if(s[i][2-i]=='X') xc++;
            else if(s[i][2-i]=='.'){
                dc=i;
            }
        }
        if(oa==2 && dr!=-1){
            cout << dr+1 << " " << dr+1 << '\n';
            continue;
        }
        else if(oc==2 && dc!=-1){
            cout << dc+1 << " " << 3-dc << '\n';
            continue;
        }
        if(xr==2 && dr!=-1){
            ansx=dr+1;
            ansy=dr+1;
        }
        else if(xc==2 && dc!=-1){
            ansx=dr+1;
            ansy=3-dr;
        }
        cout << ansx << " " << ansy << '\n';
    }
    return 0;
}