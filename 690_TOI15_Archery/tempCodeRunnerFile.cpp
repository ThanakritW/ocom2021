#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,mxh,qs,total,temp,mans=LLONG_MAX,hans;
pair<ll,ll> box[500010];
int main(){
    cin >> n;
    mxh=INT_MAX;
    for(int i=0;i<n;i++){
        cin >> box[i].second;
        mxh=min(mxh,box[i].second); //impossible range
    }
    for(int i=0;i<n;i++){
        cin >> box[i].first;
        total+=box[i].first; //total hieght if moving to 0;
    }
    sort(box,box+n); //sort by hieght of hole
    qs=0;
    for(int i=0;i<n;i++){
        if(box[i].first>mxh) break; //if hole height exceed possible range then break;
        temp=total-n*box[i].first+qs;; //calculate total move to move all box to height of box[i]'s hole.
        if(temp<mans){ //if this is a better solution.
            hans=box[i].first;
            mans=temp;
        }
        qs+=box[i].second;
    }
    cout << hans << " " << mans;
    return 0;
}