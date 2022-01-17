#include<bits/stdc++.h>
using namespace std;
unsigned long long n,t,temp,u=LLONG_MAX,l=0,total,mid;
vector<long long> a;
int main(){
    cin >> n >> t;
    for(long long i=0;i<n;i++){
        cin >> temp;
        a.push_back(temp);
    }
    while(l<u){
        long long m=(l+u)/2;
        long long total=0;
        for(auto e:a) total+=m/e;
        if(total>=t)
            u=m;
        else 
            l=m+1;
    }
    cout << l;
}