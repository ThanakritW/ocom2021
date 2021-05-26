#include<bits/stdc++.h>
using namespace std;
unsigned long long n,t,temp,u=ULLONG_MAX,l=0,total,mid;
vector<long long> a;
int main(){
    cin >> n >> t;
    for(long long i=0;i<n;i++){
        cin >> temp;
        a.push_back(temp);
    }
    while(1){
        mid=(l+u)/2;
        if(l>=u ) break;
        total=0;
        for(long long i=0;i<n;i++)
            total+=mid/a[i];
        if(total<t)
            l=mid+1;
        else
            u=mid-1;
    }
    total=0;
    for(long long i=0;i<n;i++)
        total+=mid/a[i];
    if(total<t) l++;
    cout << l;

}
