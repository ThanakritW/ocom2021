#include<bits/stdc++.h>
using namespace std;
stack<long long> s;
long long ans,t,n,a[3050];
// int getMaxArea(int hist[], int n)
// {
//     while (i < n)
//     {
//         if (s.empty() || hist[s.top()] <= hist[i])
//             s.push(i++);
//         else
//         {
//             tp = s.top();
//             s.pop();
//             area_with_top = hist[tp] * (s.empty() ? i :
//                                    i - s.top() - 1);
//             if (max_area < area_with_top)
//                 max_area = area_with_top;
//         }
//     }
//     return max_area;
// }
int main(){
    while(cin >> n){
        if(n==0) break;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        ans=0;
        for(int i=0;i<n;i++){
            if(s.empty() || a[s.top()]<=a[i]){
                s.push(i);
            }
            else{
                while(!s.empty() && a[s.top()]>a[i]){
                    t=s.top();
                    s.pop();
                    cout << t << " " << i << '\n';
                    cout << a[t] * (s.empty() ? i : i - s.top() - 1) << "<-" << '\n';
                    ans=max(ans,a[t] * (s.empty() ? i : i - s.top() - 1));
                    cout << ans << '\n';
                }
            }
        }
        while(!s.empty()){
            t=s.top();
            s.pop();
            ans = max(ans,a[t] * (s.empty() ? n : n - s.top() - 1));
        }
        cout << ans << '\n';
    }
    return 0;
}