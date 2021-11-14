#include<bits/stdc++.h>
using namespace std;
int n,i,t[300],c=0,mul=1,ans=0;
int main(){
    cin >> n;
    i=0;
    while(n>2){
        t[i]=n%3;
        n=n/3;
        i++;
    }
    t[i]=n;
    for(int j=0;j<i+2;j++){
        if(t[j]==3){
            t[j]=0;
            t[j+1]++;
        }
        else if(t[j]==2){
            c++;
            t[j]=0;
            t[j+1]++;
        }
        else if(t[j]==1){
            c++;
        }
    }
    // for(int j=i+1;j>-1;j--){
    //     cout << t[j];
    // }
    // cout << '\n';
    cout << c << " ";
    for(int j=0;j<i+2;j++){
        ans+=mul*t[j];
        mul=mul*3;
    }
    cout << ans;
}