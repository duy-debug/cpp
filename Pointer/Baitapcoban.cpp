#include <bits/stdc++.h>
using namespace std;
void tang(int *n){
    ++(*n);
}
int main(){
    int a=100;
    int *ptr=&a; // gan dai chi cau bien a cho con tro
    cout<<"Dia chi cua bien a: "<<&a<<endl;
    cout<<"Gia tri cua bien a: "<<ptr<<endl;
    cout<<"Gia tri cua bien ma con tro ptr dang tro toi: "<<*ptr<<endl;
    *ptr=500;
    cout<<"Dia chi cua bien a thay doi thong qua con tro: "<<a<<endl;
    tang(&a);
    cout<<a<<endl;
    int *b = new int[1000000000]; // cap phat dong: head
    int c[100]; // cap phat tinh: stack
    int n; cin>>n;
    for(int i=0; i<n; i++) cin>>c[i];
    for(int i=0; i<n; i++) cout<<c[i]<<" ";
    delete []b; // thu hoi vung nho
}