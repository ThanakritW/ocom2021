#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,total=0;
    ll m[3][3]={{1,1,1},{2,1,0},{1,0,1}};
    ll ans[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    ll t[3][3];
    cin >> n;
    while(n){
        if(n&1){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    t[i][j]=0;
                    for(int k=0;k<3;k++){
                        t[i][j]+=ans[i][k]*m[k][j];      
                    }
                }
            }
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    ans[i][j]=t[i][j]%1000000007;
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                t[i][j]=0;
                for(int k=0;k<3;k++){
                    t[i][j]+=m[i][k]*m[k][j];        
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                m[i][j]=t[i][j]%1000000007;
            }
        }
        n>>=1;
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            total+=ans[i][j];
        }
    }
    cout << total;
    return 0;
}