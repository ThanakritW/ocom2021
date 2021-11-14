#include<bits/stdc++.h>
using namespace std;
int x[6]={1,2,3,5,4,6},d[6],n;
string s;
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        for(int i=0;i<6;i++){
            d[i]=x[i];
        }
        for(auto e:s){
            if(e=='F'){
                swap(d[0],d[1]);
                swap(d[0],d[5]);
                swap(d[0],d[3]);
            }
            else if(e=='B'){
                swap(d[0],d[3]);
                swap(d[0],d[5]);
                swap(d[0],d[1]);
            }
            else if(e=='L'){
                swap(d[0],d[2]);
                swap(d[0],d[5]);
                swap(d[0],d[4]);
            }
            else if(e=='R'){
                swap(d[0],d[4]);
                swap(d[0],d[5]);
                swap(d[0],d[2]);
            }
            else if(e=='C'){
                swap(d[1],d[2]);
                swap(d[1],d[3]);
                swap(d[1],d[4]);
            }
            else if(e=='D'){
                swap(d[1],d[4]);
                swap(d[1],d[3]);
                swap(d[1],d[2]);
            }
            else return 1;
        }
        cout << d[1] << " ";
    }
    return 0;
}