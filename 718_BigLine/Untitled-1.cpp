    #include<bits/stdc++.h>
    using namespace std;
    int p[100100],n,m,a,b,q;
    int fp(int x){
        if(p[x]!=x) p[x]=fp(p[x]);
        return p[x];
    }
    int main(){
        cin >> n >> m;
        for(int i=0;i<n;i++){
            p[i]=i;
        }
        for(int i=0;i<m;i++){
            cin >> a >> b;
            a=fp(a);
            b=fp(b);
            if(a!=b){
                p[b]=a;
            }
        }
        cin >> q;
        for(int i=0;i<q;i++){
            cin >> a >> b;
            if(fp(a)==fp(b)) cout << "true\n";
            else cout << "false\n";
        }
        return 0;
    }