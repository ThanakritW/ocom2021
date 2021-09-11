#include<bits/stdc++.h>
using namespace std;
long long n,m,k,p;
long long v[300100];
char c;
int main(){
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> c;
        if(c=='B'){
            cin >> k >> p;
            while(k<=n && v[k]<p){
                v[k]=p;
                k++;
            }
        }
        else{
            cin >> k;
            cout << v[k] << '\n';
        }
    }
    return 0;
}