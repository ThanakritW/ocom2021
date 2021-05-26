#include<bits/stdc++.h>
using namespace std;
long nc,n,temp;
vector<long> v;
main()
{
    string cmd;
    cin >> nc;
    for(int j=0;j<nc;j++){
    {
        cin >> cmd;
        if(cmd=="v_i_b_a")
        {
            cin >> n;
            for(int i=0; i<n; i++)
            {
                cin >> temp;
                v.push_back(temp);
            }
        }
        else if(cmd=="v_i_b") {
            cin >> temp;
            v.push_back(temp);
        }
        else if(cmd=="v_p_f") {
            cout << v[0] << endl;
        }
        else if(cmd=="v_p_l") {
            cout << v[v.size()-1] << endl;
        }
        else if(cmd=="v_p_a") {
            for(auto e:v){
                cout << e << " ";
            }
            cout << endl;
        }
        else if(cmd=="v_p_pos") {
            cin >> temp;
            cout << v[temp-1] << endl;
        }
        else if(cmd=="v_p_size") {
            cout << v.size() << endl;
        }
        else if(cmd=="v_d_b") {
            v.pop_back();
        }
    }
    }
}
