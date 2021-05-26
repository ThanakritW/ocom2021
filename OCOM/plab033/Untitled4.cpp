#include<bits/stdc++.h>
using namespace std;
int n,mx,mn,cnt,dcnt;
vector<char> s;
char c;
string t;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t;
        for(int j=0;j<t.size();j++){
            s.push_back(t[j]);
        }
        sort(s.begin(),s.end());
        dcnt=0;
        mx=0;
        mn=INT_MAX;
        t="1";
        for(auto e:s){
            if(e!=c){
                if(t!="1"){
                    mx=max(mx,cnt);
                    mn=min(mn,cnt);
                }
                c=e;
                cnt=1;
                dcnt++;
                t="0";
            }
            else{
                cnt++;
            }
        }
        cout << dcnt << " " << mx << " " << mn << '\n';
        s.clear();
    }
}
