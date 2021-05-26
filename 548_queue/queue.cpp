#include<bits/stdc++.h>
using namespace std;
long n,temp,x=0,a[100010],indx=0;
string s;
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        if(s=="push"){
            cin >> temp;
            a[x]=temp;
            x++;
        }
        if(s=="pop"){
            if(indx==x){
                cout << "null\n";
            }
            else if(x>indx){
                cout << a[indx] << endl;
                indx++;
            }
        }
    }
}
