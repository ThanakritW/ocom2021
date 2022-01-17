#include<bits/stdc++.h>
#include "portfolio.h"
using namespace std;
//initializing
int n=5,cmd;
string menu[5]={"Exit","About Me","Education","Achievement","Experience"};
pair<int,int> page[5]={{0,0,},{1,0},{2,0},{3,7},{9,10}};
string username;
//main function;
int main(){
    getline(cin,username);
    cout << "Hello! " << username << ". Welcome to my portfolio!!\n";
    while(1){
        cout << username << ". Please state your inquiry.\n";
        for(int i=0;i<n;i++){
            cout << i << ": " << menu[i] << '\n';
        }
        cin >> cmd;
        if(cmd>=n) 
        cout << "You have entered an invalid task. Please input a valid task.\n";
        else if(cmd==0){ //Exit
            cout << "Thank you for your visiting!"; break;
        }else{ //About Me
            cout << "This is information on the topic: " << menu[cmd] << '\n';
            cout << "You can also look at page " << page[cmd].first;
            if(page[cmd].second!=0) cout << "-" << page[cmd].second;
            cout << '\n';
            pinformation(cmd);
        }
    }
    //see you again!
    return 0;
}




