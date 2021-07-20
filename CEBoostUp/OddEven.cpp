#include<iostream>
using namespace std;
int main(){
string n;
cin >> n;
int sz=n.size();
for(int i=0;i<sz;i++){
    if(i==0 && (n[i]=='-')) continue;
    if(n[i]>'9' || n[i]<'0'){
        if(n[i]=='.'){
            for(int j=i+1;j<sz;j++){
                if(n[j]!='0'){
                    cout << "Error";
                    return 0;
                }
            }
            sz=i;
            break;
        }
        cout << "Error";
        return 0;
    }
}
int ans=n[sz-1]-'0';
if(ans%2==0) cout << "even";
else cout << "odd";
return 0;
}