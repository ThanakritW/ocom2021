#include<bits/stdc++.h>
using namespace std;
int n,a[10010],ans;
char cmd[10];
main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> cmd;
    if(cmd[0]=='s'){
        ans=0;
        for(int i=0;i<n;i++){
            ans += a[i]; //+= ��� ��� ����ͧ�����ʴ�᷹ sum = sum + a[i]
        }
    }
    else if(cmd[0]=='m'){
        ans=1; //��� ans=0 ���� 0 �ٳ���á��� 0
        for(int i=0;i<n;i++){
            ans = ans*a[i];
        }
    }
    cout << ans;
}
