#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    map<string,int> mp;
    string tem;
    while(ss>>tem){
        mp[tem]++;
    }
    string res1, res2;
    int fre1=0, fre2= 1e9;
    for(auto it: mp){
        if(it.second >= fre1){
            fre1 = it.second;
            res1= it.first;
        }
        if(it.second<=fre2){
            fre2=it.second;
            res2=it.first;
        }
    }
    cout<<res1<<" "<< fre1<< endl;
    cout<<res2<<" "<<fre2<<endl;
}