#include <bits/stdc++.h>
using namespace std;
// Kiem tra mot chuoi khi xoa cac tu co the con tu python
int main(){
    string s;
    getline(cin,s);
    string a="python";
    int res=0;
    for(auto x: s){
        if(x==a[res]) res++;
        if(res==6) {
            cout<<"YES"<<endl; return 0;
        }
    }
    cout<<"NO"<<endl;
}