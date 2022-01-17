#include<bits/stdc++.h>
using namespace std;
string s[3010];
int n,total=1,g=0;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    sort(s,s+n,greater<string>());
    for(int i=0;i<n;i++){
        if(i!=n-1){
            for(int j=0;j<s[i].size();j++){
                if(s[i][j]==s[i+1][j])continue;
                else{
                    if(j==0) break;
                    for(int k=i+1;k<n;k++){
                        if(s[i].substr(0,j)==s[k].substr(0,j)){
                        // cout << i;
                            total*=(k-i+1);
                        }
                        else{
                            i=k-1;
                            break;
                        }
                    }
                }
            }
        }
        g++;
    }
    for(int i=2;i<=g;i++){
        total*=i;
    }
    cout << total;
    return 0;
}
