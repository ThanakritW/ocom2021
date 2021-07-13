#include<bits/stdc++.h>
using namespace std;
int main(){
    cin >> n >> m >> p;
    cin >> x >> y >> r;
    for(int i=0;i<r;i++){
        s.insert({x+i,y+r-i});
        s.insert({x+r-i,y-i});
        s.insert({x-i,y-r+i});
        s.insert({x-r+i,y-i});
    }
    for(int i=0;i<p;i++){
    cin >> x >> y >> r;
        for(int i=0;i<r;i++){
            s.insert({x+i,y+r-i});
            s.insert({x+r-i,y-i});
            s.insert({x-i,y-r+i});
            s.insert({x-r+i,y-i});
        }
    }
    return 0;
}