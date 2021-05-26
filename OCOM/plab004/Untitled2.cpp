#include<bits/stdc++.h>
using namespace std;
long n,temp,esum=0,etotal=0,osum=0,ototal=0;
char order[10];
main(){

    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        if(temp%2==0){
            esum+=temp;
            etotal++;
        }
        else{
            osum+=temp;
            ototal++;
        }
    }
    cin >> order;
    if(order[0]=='o'){
        cout << osum << " " << ototal;
    }
    else{
        cout << esum << " " << etotal;
    }

}
