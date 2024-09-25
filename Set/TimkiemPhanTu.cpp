#include <bits/stdc++.h>
using namespace std;
// find() O(LogN):Tim kiem phan tu. Neu khong tim thay phan tu thi no tra ve a.end ,con neu tim thay thi no tra ve iterator ve thang do
// count() O(LogN): Dem so lan xuat hien cua mot phan tu (voi set, gia tri tra ve luon la 0 hoac 1).
int main(){
    set <int> a;
    for(int i=1; i<=5; i++) a.insert(i);
    if(a.find(1)==a.end())
    cout<<"Khong tim thay"<<endl;
    else cout<<"Tim thay"<<endl;
    // cach 2
    auto it = a.find(1);
    if(it != a.end()) cout<<"TIM THAY";
    else cout<<"KHONG TIM THAY";
    // cach 3
    cout<<endl;
    if(a.count(1)!=0) cout<<"Tim Thay";
    else cout<<"Khong tim thay";
}