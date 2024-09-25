#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
// set O(LogN): dung de luu tru cac phan tu khong trung lap theo mot thu tu nhat dinh(duoc sap xep tang) va ki tu no cung sap xep nhat dinh.
// multiset: co the luu cac phan tu trung nhau ,khac voi set(set khong luu cac phan tu trung nhau).
// unordered_set: la set ma khong co thu tu(no se sap xep tuy y tuc la no khong in theo thu tu nhap).
// erase() O(LogN): Xoa mot phan tu khoi set.
// find() O(LogN): Tim mot phan tu trong set.
// count() O(LogN): Dem so lan xuat hien cua mot phan tu (voi set, gia tri tra ve luon la 0 hoac 1). Con count trong multiset thi no tra ve so lan xuat hien. 
// insert(x) O(LogN):  them phan tu.
// size() O(1): 
// begin() va end(): Tra ve iterator toi phan tu dau tien va phan tu cuoi cung.
int main(){
    set<int> a;
    a.insert(1);
    a.insert(2);
    a.insert(3);
    a.insert(5);
    a.insert(1);
    a.insert(0);
    cout<<a.size()<<endl;
    //Co 3 cach duyet
    //cach 1
    for(auto x: a) //auto thay cho tat ca kieu du lieu
    cout<<x<<" ";
    cout<<endl;
    //cach 2
    for(set<int>::iterator it=a.begin(); it !=a.end(); ++it){
        cout<<*it<<" ";
    }
    //cach 3
    cout<<endl;
    for(auto it=a.begin(); it !=a.end(); ++it){
        cout<<*it<<" ";
    }
    cout<<endl;
    // multiset
    multiset<int> b;
    b.insert(1);
    b.insert(1);
    b.insert(2);
    b.insert(2);
    b.insert(0);
    b.insert(3);
    cout<<b.size()<<endl;
    for(int x: b) cout<<x<<" ";
    cout<<endl;
    cout<<b.count(1); // dem so lan xuat hien
    b.erase(1); // xoa tat ca cac phan tu co gia tri bang 1
    cout<<endl;
    // cach xoa 1 phan tu co gia tri bang 1 dau tien
    // auto it  = b.find(1); Trong multiset thi find no se tra ve iterator phan tu dau tien
    //b.erase(it);
    for(int x: b) cout<<x<<" ";
}
