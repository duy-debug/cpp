#include <bits/stdc++.h>
using namespace std;
bool KTSNT(long long  n){
    if(n<2) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    vector<int> v;
    int x;
    while(cin>>x){
        if(KTSNT(x)){
            v.push_back(x);
        }
    }
    int b[v.size()]={0};
    for(int i=0; i<v.size(); i++){
        if(b[i]==0){
            int dem =1;
            for(int j=i+1; j<v.size(); j++){
                if(v[i]==v[j]){
                    dem++;
                    b[j]=1;
                }
            }
            cout<<v[i]<<" "<<dem<<endl;
        }
    }
     return 0;
}