#include<bits/stdc++.h>
using namespace std;
int n,a[1010];
void bsort(int x[]){
    bool re=false;
    for(int i=0;i<n-1;i++){
        if(x[i]>x[i+1]){
            re=true;
            swap(x[i],x[i+1]);
        }
    }
    if(re==true) bsort(x);
}
void ssort(int x[],int pos,int num){
    if(pos!=num){
    int mn=INT_MAX,mpos=0;
    for(int i=pos;i<num;i++){
        if(mn>x[i]){
            mn=x[i];
            mpos=i;
        }
    }
    swap(x[pos],x[mpos]);
    ssort(x,pos+1,num);
    }
}
int bsearch(int low,int high, int tg){
    int mid=(low+high)/2;
    if(a[mid] == tg) return mid;
    else if(a[high] == tg) return high;
    else if(a[low] == tg) return low;
    else if(low==high || low==high-1) return -1;
    else if(tg<a[mid] && tg>a[low]) return  bsearch(low,mid,tg);
    else if(tg>a[mid] && tg<a[high]) return bsearch(mid,high,tg);
    return -1;
}
main(){
    int s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    ssort(a,0,n);
    cout << "Sorted array: ";
    for(int i=0;i<n;i++) cout << a[i] << " ";
    cout << endl;
    for(int i=0;i<=a[n-1]+1;i++){
    cout << i << " found at " << bsearch(0,n-1,i) << endl;
    }
}
