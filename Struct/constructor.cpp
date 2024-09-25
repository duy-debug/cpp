#include <bits/stdc++.h>
using namespace std;
// constructor: ham khoi tao
// khong co kieu tra ve
// ten ham chinh la ten struct
struct Sinhvien{
    string ten="", msv="", ns="", qq="";
    double gpa;
    Sinhvien(){
        msv ="001";
        ten ="nguyen van a";
        ns ="1/1/2001";
        qq ="phap";
        gpa = 3.6;
    }
    Sinhvien(string name, string ma, string ngaysinh, string quequan, double diem){
        ten=name;
        msv=ma;
        ns=ngaysinh;
        qq=quequan;
        gpa=diem;
    }
    Sinhvien(double diem){
         ten="Nguyen van dat";
         msv="1010";
         ns="5/5/2003";
         qq="usa";
         gpa=diem;
    }
};
void out(Sinhvien a){
    cout<<" "<<a.ten<<" "<<a.msv<<" "<<a.ns<<" "<<a.qq<<" "<<a.gpa<<endl;
}
int main(){
    Sinhvien x("Nguyen van C","1111","1/1/1000","ha noi",3);
    Sinhvien y;
    out(x);
    out(y);
    Sinhvien z(10);
    out(z);
}