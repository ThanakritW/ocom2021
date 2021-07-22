#include<iostream>
using namespace std;
int n,m;
int main(){
    cin >> n >> m;
    if(n%(m+m-1)==0 || n%(m+m-1)==m){
        while(n){
            for(int i=0;i<m;i++){
                cout << '*' << " ";
                n--;
            }
            cout << '\n';
            if(!n) break;
            for(int i=0;i<m-1;i++){
                cout << " " << '*';
                n--;
            }
            cout << '\n';
            if(!n) break;
        }
    }
    else cout << "Pattern not found.";
    return 0;
}