#include<bits/stdc++.h>
using namespace std;
int a[100100];
void ms0(int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        ms0(l,m);
        ms0(m+1,r);
        int temp[r-l+1];
        int k=0;
        int i=l;
        int j=m+1;
        while(i<=m && j<=r){
            if(a[i]<=a[j]){
                temp[k++]=a[i++];
            }else{
                temp[k++]=a[j++];
            }
        }
        while(i<=m){
            temp[k++]=a[i++];
        }
        while(j<=r){
            temp[k++]=a[j++];
        }
        for(int i=l;i<=r;i++){
            a[i]=temp[i-l];
        }
    }
}
void ms1(int l,int r){
    if(l<r){
        int m=l+(r-l)/2;
        ms1(l,m);
        ms1(m+1,r);
        int temp[r-l+1];
        int k=0;
        int i=l;
        int j=m+1;
        while(i<=m && j<=r){
            if(a[i]>=a[j]){
                temp[k++]=a[i++];
            }else{
                temp[k++]=a[j++];
            }
        }
        while(i<=m){
            temp[k++]=a[i++];
        }
        while(j<=r){
            temp[k++]=a[j++];
        }
        for(int i=l;i<=r;i++){
            a[i]=temp[i-l];
        }
    }
}
int n,cmd;
int main(){
    cin >> n >> cmd;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    if(cmd==0) ms0(0,n-1);
    else ms1(0,n-1);
    for(int i=0;i<n;i++){
        cout << a[i] << ' '; 
    }
    return 0;
}