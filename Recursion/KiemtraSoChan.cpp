#include <bits/stdc++.h>
using namespace std;
bool Check(long long n){
   if(n<10){
        if(n%2==1)
            return 0;    
        else
            return 1;
    } 
   else{
        if(n%10%2==1)
        return 0;
        return Check(n/10);
   }
}
int main(){
    long long n;
    cin>>n;
    if(Check(n)) cout<<"Yes";
    else cout<<"No";
}