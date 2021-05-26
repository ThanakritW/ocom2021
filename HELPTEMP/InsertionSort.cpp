#include<bits/stdc++.h>
using namespace std;
int n,k=1,p,pos,a[10010],temp;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=1;i<n;i++){
        for(int j=i;j>0;j--){
            if(a[j]<a[j-1]){
                temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
            else break;
        }
        for(int i=0;i<n;i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
