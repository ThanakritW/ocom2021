#include<bits/stdc++.h>
using namespace std;
int t;
int thorn[10010][10010];
int m,n;
vector<int> v;
int main()
{
    cin >> n >> m;
    for(int i=0;i<m;i++){
        cin >> t;
        v.push_back(t);
    }
    for (int i=0;i<m;i++)
        thorn[0][i] = 1;
    sort(v.begin(),v.end());
    for (int i=1;i<=n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if(i-v[j]>=0){
                thorn[i][j]+=thorn[i-v[j]][j];
            }
            if(j > 0){
                thorn[i][j]+=thorn[i][j-1];
            }
        }
    }
    cout << thorn[n][m-1];
    return 0;
}


