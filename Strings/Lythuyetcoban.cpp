#include <bits/stdc++.h>
using namespace std;
    // isdigit(char c): kiem tra chu sort
    // islower(char c): kiem tra in thuong
    // isupper(char c): kiem tra in hoa
    // isalpha(char c): kiem tra chu cai
    // int tolower(char c): tra ve ki tu in thuong cua c (tra ve ma ASCCI) nen phai ep kieu char
    // int toupper(char c): tra ve ki tu in hoa cua c (tra ve ma ASCCI) nen phai ep kieu char
int main(){
    int b; cin>>b; // cin se de lai enter
    //trong bo dem ban phim
    string s;
    cin.ignore(1); // cau lenh giup khong bi troi lenh/"1" tuc la loai bo ki tu xuong dong
    getline(cin,s); // getline doc phai phim enter va ket thuc viec nhap
    // getline khi gap ki tu xuong dong no se dung lai
    cout<<s<<endl;
    cout<<s.size()<< endl; // cho biet do dai cua xau ki tu
    cout<<s.length()<<endl;
    for(char x : s){ // in ra tung ki tu nhu mang
        cout<<x;
    }
    cout<<endl;
    s.push_back('@'); // s.push-back('@') // hoac  s.push_back ("@123") la sai
    cout<<s<<endl;
    s.pop_back(); // s.pop_back() xoa ki tu cuoi cung
    cout<<s<<endl;
    s.insert(4,"thich "); // chen xau vao chi so 4
    cout<<s<<endl;
    s.erase(4,6); // xoa 6 ki tu tu chi so 4
    cout<<s<<endl;
    s.erase(1); // xoa tat ca ki tu tu chi so 1
    cout<<s<<endl;
    string t ="toi";
    if(s.find(t) != string ::npos){ // tim chuoi con
        cout<<"Co"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    string k = "54897465452132159876541321"; // khi gap bai toan chu so len toi hang nghin thi khong the luu bang int hay long long. trong truong hop nay co the luu nhu mot xau ki tu.
    int sum = 0;
    for(char x : s){
        sum+=x-'0';
    }
    cout<<sum<<endl;
    cout<<s.front()<<endl; // in ra ki tu dau tien
    cout<<s.back()<<endl; // in ra ki tu cuoi cung
    string n="abcde";
    string m="abcdz";
    cout<<n.compare(m)<<endl; // so sanh
    // n==m :0, n>m: 1, n<m: -1
    string nm=n+m; // concate
    cout<<nm<<endl;
    string ss; 
    // khai bao 1 bien stringstream
    stringstream sss(ss); // khoi tao sss =ss
    string word;
    while(sss>>word){ // tach cac tu
        cout<<word<<endl;
    }
}