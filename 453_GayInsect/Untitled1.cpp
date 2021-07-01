#include<bits/stdc++.h>
using namespace std;
int g[100010];
int n,r,a,b;
int main()
{
    cin >> n >> r;
    for(int i=0; i<r; i++)
    {
        cin >> a >> b;
        if(g[a]!=0 && g[b]!=0)
        {
            if(g[a]==g[b]){
            cout << "Gay found!";
            return 0;
            }
        }
        else
        {
            if(g[a]!=0)
            {
                g[b]=-g[a];
            }
            else if(g[b]!=0)
            {
                g[a]=-g[b];
            }
            else
            {
                g[a]=1;
                g[b]=-1;
            }
        }
    }
    cout << "Gay not found!";
}
