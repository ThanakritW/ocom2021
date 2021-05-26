#include<bits/stdc++.h>
using namespace std;
long n,temp,x=0,a[100010];
string s;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s=="push"){
            x++;
            cin >> temp;
            a[x]=temp;
        }
        if(s=="pop"){
            if(x!=0){
                cout << a[x] << endl;
                x--;
            }
            else if(x==0){
                cout << "null\n";
            }
        }
    }
}
