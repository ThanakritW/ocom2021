#include<bits/stdc++.h>
using namespace std;
int n,m,r[100100],tx,ty,pos,cnt;
set<pair<int,int>> sx,sy;
set<pair<int,int>> :: iterator itu,itl;
char axis;
int main(){
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> r[i];
    }
    for(int i=0;i<n;i++){
        cin >> tx >> ty;
        sx.insert({tx,ty});
        sy.insert({ty,tx});
    }
    for(int i=0;i<m;i++){
        cin >> axis >> pos;
        if(axis=='x'){
            cnt=0;
            itl=sx.lower_bound({pos-r[i],0});
            itu=sx.upper_bound({pos+r[i]+1,0});
//            cout << "Lower " << itl->first << " " << itl->second << "\nUpper " << itu->first << " " << itu->second << '\n';
            while(itl!=itu){
                cnt++;
                sx.erase({itl->first,itl->second});
                sy.erase({itl->second,itl->first});
                itl=sx.lower_bound({pos-r[i],0});
            };
            n-=cnt;
            cout << n << '\n';
        }
        else{
            cnt=0;
            itl=sy.lower_bound({pos-r[i],0});
            itu=sy.upper_bound({pos+r[i]+1,0});
//            cout << "Lower " << itl->first << " " << itl->second << "\nUpper " << itu->first << " " << itu->second << '\n';
            while(itl!=itu){
                cnt++;
                sy.erase({itl->first,itl->second});
                sx.erase({itl->second,itl->first});
                itl=sy.lower_bound({pos-r[i],0});
            };
            n-=cnt;
            cout << n << '\n';
        }
    }
    return 0;
}
