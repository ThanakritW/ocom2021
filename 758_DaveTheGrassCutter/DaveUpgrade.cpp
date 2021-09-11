#include<iostream> 
using namespace std;int n;int main(){cin>>n;for(int y=0;y<n;y++){for(int x=0;x<n;x++){if(x&y)cout<<".";else cout<<"#";}if(y<n-1)cout<<'\n';}return 0;}