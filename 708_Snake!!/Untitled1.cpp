#include<bits/stdc++.h>
using namespace std;
int m,n;
main(){
    cin >> n >> m;
    if(n%2==0){
        cout << "Yes\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0){
                    if(i==n-1) cout << "R";
                    else cout<<"D";
                }
                else if(j==m-1){
                    if(i%2==0) cout << "L";
                    else cout << "U";
                }
                else if(j==1){
                    if(i==0) cout << "L";
                    else if(i%2==1) cout << "R";
                    else cout << "U";
                }
                else{
                    if(i%2==0) cout << "L";
                    else cout << "R";
                }
            }
            cout << '\n';
        }
    }
    else if(m%2==0){
        cout << "Yes\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0){
                    if(j==0)
                        cout << "D";
                    else cout<<"L";
                }
                else if(i==n-1){
                    if(j%2==0) cout << "R";
                    else cout << "U";
                }
                else if(i==1){
                    if(j==0) cout << "D";
                    else if(j==m-1) cout << "U";
                    else if(j%2==1) cout << "R";
                    else cout << "D";
                }
                else{
                    if(j%2==0) cout << "D";
                    else cout << "U";
                }
            }
            cout << '\n';
        }
    }
    else{
    cout << "No\n";
    }
}
