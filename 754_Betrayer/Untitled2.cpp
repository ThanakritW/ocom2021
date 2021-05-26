#include<bits/stdc++.h>
#include "Betrayed.h"
using namespace std;
int n,k,ans=0;
long long b;
bool st=0;
main(){
    n=Get_n();
    k=min(Get_k(),20);
    for(int i=1;i<=k;i++){
        b=1;
        while(b<=n){
            for(int j=0;j<pow(2,i-1);j++){
                if(b>n) break;
                Taste(i,b);
                b++;
            }
            b+=pow(2,i-1);
        }
    }
    for(int i=k;i>=1;i--){
        if(Next_Day()[i]==true){
            ans+=pow(2,i-1);
        }
    }
    Submit(ans+1);
}
