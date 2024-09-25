#include <bits/stdc++.h>
using namespace std;
// xet 1 sinh vien
// ten
// msv
// ngay sinh
// gpa
// que quan
struct Sinhvien{
    string ten, msv, ns, qq;
    double gpa;
    void nhap(){ // da biet do la sinh vien nao
    getline(cin,ten);
    cin>>msv>>ns;
    cin.ignore();
    getline(cin,qq);
    cin>>gpa;
    }
    void output(){ // da biet do la sv nao
        cout<<ten<<" "<<msv<<" "<<ns<<" "<<qq<<" "<<gpa<<endl;
    }
};
void nhapp(Sinhvien &a){
    cin.ignore();
    getline(cin,a.ten);
    cin>>a.msv>>a.ns;
    cin.ignore();
    getline(cin,a.qq);
    cin>>a.gpa;
}
void out(Sinhvien a){ // sinh vien bat  ky
    cout<<a.ten<<" "<<a.msv<<" "<<a.ns<<" "<<a.qq<<" "<<a.gpa<<endl;
}
int main(){ 
    Sinhvien x;
    // getline(cin,x.ten);
    // cin>>x.msv>>x.ns;
    // cin.ignore();
    // getline(cin,x.qq);
    // cin>>x.gpa;
    x.nhap();
    x.output();
    nhapp(x);
    out(x);
}