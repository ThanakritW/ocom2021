/*
TASK: PLAB026 , 753
LANG: C++
AUTHOR: THANAKRIT WONG-ASA
CENTER: KKU022
*/
#include<iostream>
#include<map>
using namespace std;
map<pair<long,long>,long> mp;
long n,m,k,x,y;
long long ans[10];
main(){
    cin >> n >> m;
    cin >> k;
    ans[0]=n*m-k;
    for(long i=0;i<k;i++){
        cin >> x >> y;
        if(mp[{x,y}]!=0){
            ans[mp[{x,y}]]--;
            ans[0]++;
        }
        mp[{x,y}]=-1;
        //upper left
        if(x!=1&&y!=1&&mp[{x-1,y-1}]!=-1){
            ans[mp[{x-1,y-1}]]--;
            mp[{x-1,y-1}]++;
            ans[mp[{x-1,y-1}]]++;
        }
        //uppermid
        if(y!=1&&mp[{x,y-1}]!=-1){
            ans[mp[{x,y-1}]]--;
            mp[{x,y-1}]++;
            ans[mp[{x,y-1}]]++;
        }
        //upperright
        if(x!=n&&y!=1&&mp[{x+1,y-1}]!=-1){
            ans[mp[{x+1,y-1}]]--;
            mp[{x+1,y-1}]++;
            ans[mp[{x+1,y-1}]]++;
        }
        //midleft
        if(x!=1&&mp[{x-1,y}]!=-1){
            ans[mp[{x-1,y}]]--;
            mp[{x-1,y}]++;
            ans[mp[{x-1,y}]]++;
        }
        //midright
        if(x!=n&&mp[{x+1,y}]!=-1){
            ans[mp[{x+1,y}]]--;
            mp[{x+1,y}]++;
            ans[mp[{x+1,y}]]++;
        }
        //lowerleft
        if(x!=1&&y!=m&&mp[{x-1,y+1}]!=-1){
            ans[mp[{x-1,y+1}]]--;
            mp[{x-1,y+1}]++;
            ans[mp[{x-1,y+1}]]++;
        }
        //lowermid
        if(y!=m&&mp[{x,y+1}]!=-1){
            ans[mp[{x,y+1}]]--;
            mp[{x,y+1}]++;
            ans[mp[{x,y+1}]]++;
        }
        //lowerright
        if(x!=n&&y!=m&&mp[{x+1,y+1}]!=-1){
            ans[mp[{x+1,y+1}]]--;
            mp[{x+1,y+1}]++;
            ans[mp[{x+1,y+1}]]++;
        }
    }
    for(int i=0;i<9;i++){
        cout << i <<" " << ans[i] <<endl;
    }
}
