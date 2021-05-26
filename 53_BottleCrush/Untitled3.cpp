// #include<bits/stdc++.h>
//using namespace std;
//long mn=LONG_MAX,mx=0,a[100010],n,m,h,cnt;
//main(){
//    cin >> n >> m;
//    for(int i=0;i<n;i++){
//        cin >> a[i];
//        mx=max(mx,a[i]);
//    }
//    for(int i=0;i<m;i++){
//        cin >> h;
//        if(h>mn || h>mx)
//            cout << "0\n";
//        else{
//            cnt=0;
//            for(int j=0;j<n;j++){
//                if(a[j]>h){
//                    if(j!=0 && a[j-1]>0){
//                        a[j-1]=0;
//                        cnt++;
//                    }
//                    do{
//                        a[j]=0;
//                        j++;
//                        cnt++;
//                    }while(j<n && a[j]>h);
//                    if(a[j]>0){
//                        a[j]=0;
//                        cnt++;
//                    }
//                }
//            }
//            cout << cnt << '\n';
//        }
//    }
//}

//ver 2

#include<bits/stdc++.h>
using namespace std;
long mn=LONG_MAX,mx=0,a[100010],n,m,h,cnt,s,b;
main(){
    ios_base::sync_with_stdio(false);
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> a[i];
        mx=max(mx,a[i]);
    }
    for(int i=0;i<m;i++){
        cin >> h;
        if(h>mn || h>mx)
            cout << "0\n";
        else{
            cnt=0;
            for(int j=0;j<n;j++){
                if(a[j]<0){
                    j=(j-a[j])-1;
                }
                if(a[j]>h){
                    s=j;
                    b=0;
                    if(j!=0 && a[j-1]>0){
                        a[j-1]=0;
                        b++;
                    }
                    do{
                        a[j]=0;
                        j++;
                        b++;
                    }while(j<n && a[j]>h);
                    if(a[j]>0){
                        a[j]=0;
                        b++;
                    }
                    cnt+=b;
                    a[s]=-b;
                }
            }
            cout << cnt << '\n';
            mn=h;
        }
    }
}
