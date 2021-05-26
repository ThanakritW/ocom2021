#include<bits/stdc++.h>
using namespace std;
void ssortmaxtomin(long x[],long pos,long num){
    if(pos!=num){
    long mx=0,mpos=0;
    for(long i=pos;i<num;i++){
        if(mx<x[i]){
            mx=x[i];
            mpos=i;
        }
    }
    swap(x[pos],x[mpos]);
    }
}
void ssortmintomax(long x[],long pos,long num){
    if(pos!=num){
    long mn=LONG_MAX,mpos=0;
    for(long i=pos;i<num;i++){
        if(mn>x[i]){
            mn=x[i];
            mpos=i;
        }
    }
    swap(x[pos],x[mpos]);
    }
}
long n,a[100010],nq,q[100010];
string cmd;
main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> cmd;
    if(cmd=="maxtomin")
        for(int i=0;i<n;i++){
        ssortmaxtomin(a,i,n);
        }
    else
        for(int i=0;i<n;i++){
        ssortmintomax(a,i,n);
        }
    cin >> nq;
    for(int i=0;i<nq;i++)
        cin >> q[i];
    for(int i=0;i<nq;i++){
        cout << a[q[i]-1] << endl;
    }
}
