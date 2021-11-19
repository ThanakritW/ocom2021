    #include<bits/stdc++.h>
    using namespace std;
    int n,m,k,a[2010][2010],qsd[2010][2010],qsr[2010][2010],qsl[2010][2010],mx=0,total;
    int main(){
        cin >> n >> m >> k;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin >> a[i][j];
                qsd[i][j]=qsd[i][j-1]+a[i][j];
                qsr[i][j]=a[i][j]+qsr[i-1][j-1];
                qsl[i][j]=a[i][j]+qsl[i-1][j+1];
            }
        }
        mx=INT_MIN;
        for(int j=1;j<=m-k+1;j++){
            total=0;
            for(int i=1;i<=k;i++)
                total+=(qsd[i][j+i-1]-qsd[i][j-1]);
            if(total>mx) mx=total;
            for(int i=k+1;i<=n;i++){
                total+=(qsd[i][j+k-1]-qsd[i][j-1])-(qsr[i-1][j+k-1]-qsr[i-k-1][j-1]);
                if(total>mx) mx=total;
            }
        }
        for(int j=1;j<=m-k+1;j++){
            total=0;
            for(int i=1;i<=k;i++)
                total+=(qsd[i][j+k-1]-qsd[i][j+k-i-1]);
            if(total>mx) mx=total;
            for(int i=k+1;i<=n;i++){
                total+=(qsd[i][j+k-1]-qsd[i][j-1])-(qsl[i-1][j]-qsl[i-k-1][j+k]);
                if(total>mx) mx=total;
            }
        }
        cout << mx;
        return 0;
    }