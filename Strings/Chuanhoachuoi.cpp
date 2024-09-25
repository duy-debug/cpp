#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string res="";
    string word;
    while(ss>>word){
        res+=toupper(word[0]);
        for(int i=1; i<word.size(); i++){
            res+=tolower(word[i]);
        }
        res+=" ";
    }
    res.pop_back();
    string ngaysinh;
    getline(cin,ngaysinh);

    if(ngaysinh[2]!= '/') ngaysinh="0"+ngaysinh;
    if(ngaysinh[5]!='/') ngaysinh.insert(3,"0");
    cout<<res<<endl;
    cout<<ngaysinh;
}