#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    int cnt=0;
    string word;
    while(ss>>word){
        cnt++;
    }
    cout<<"So luong tu trong chuoi la: "<<cnt<<endl;
}