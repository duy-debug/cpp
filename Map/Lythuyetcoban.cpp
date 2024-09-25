#include <bits/stdc++.h>
using namespace std;
// map O(LogN): <key, value>; khong the co 2 key giong nhau.Moi phan tu cua Map la pair trong do thanh first la key va second la value.
// insert() O(LogN):Them phan tu
// size() O(1)
// find() O(LogN):Tim phan tu, neu tim thay tra ve iterator,khong tim thay thi  tra ve map.end().
// count() O(LogN):Dem so lan xuat hien chi tra ve 0 hoac 1 (vi map khong the co 2 key giong nhau).
// erase() O(LogN):Xoa phan tu
int main(){
    map<int, int> a;
    a.insert({1,2});
    a.insert({2,3});
    a.insert({2,4});
    a.insert({4,3});
    a[4]=5; // <=> a.insert({4,5})
    cout<<a[2]<<endl; // in ra value dau tien
    a[2]=100;
    cout<<a[2]<<endl; // in ra value sau khi thay doi key
    // duyet map
    //c1
    for(auto x: a) // hoac thay pair<int, int> = auto
    cout<<x.first<<" "<<x.second<<endl;
    //c2 iterator
    cout<<"\n\n";
    for(map<int, int>::iterator it = a.begin(); it!=a.end(); ++it){
        cout<<(*it).first<<" "<< (*it).second<<endl;
    }
    if(a.find(2)!= a.end()) cout<<"Tim thay"<<endl;// Tim kiem phan tu
    else cout<<"Khong tim thay"<<endl;
    int dem=a.count(3); // Dem so luong phan tu xuat hien
    cout<<dem<<endl;
    a.erase(1); //Xoa phan tu key = 1
    for(auto x: a) cout<<x.first<<" "<<x.second<<endl;
    cout<<endl;
}