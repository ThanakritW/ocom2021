#include<bits/stdc++.h>
using namespace std;
int n,a[10],total,b[10];
int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        b[i]=i;
    }
    do{
        cout << a[b[0]];
        total=a[b[0]];
        for(int i=1;i<n;i++){
            if(i%2==1){
                cout<<'+'<<a[b[i]];
                total+=a[b[i]];
            }else{
                cout<<'-'<<a[b[i]];
                total-=a[b[i]];
            }
        }
        cout<<'='<<total<<'\n';
    }while(next_permutation(b,b+n));
    return 0;
}
