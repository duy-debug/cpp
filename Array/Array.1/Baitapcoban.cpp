#include <bits/stdc++.h>
#define ll long long
#define MAX 10000
using namespace std;
void Nhap(ll a[], ll &n){
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=0; i<n; i++){
		cout<<i<<". ";
		cin>>a[i];
	} 
}
void Xuat(ll a[], ll n){
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
}
bool KTDX(ll x){
    int p=0;
    int k=x;
    while(x!=0){
        p=p*10+x%10;
        x/=10;
    }
    if(p==k)
    return 1;
    else return 0;
}
void DemIn(ll a[], ll n){
    int dem=0;
    for(int i=0; i<n; i++){
        if(KTDX(a[i])){
            dem++;
        }
    }
    if(dem!=0){
    cout<<"\nSo thuan nghich: "<<dem<<endl;
    	for(int i=0; i<n; i++){
    		if(KTDX(a[i])) cout<<a[i]<<" ";
		}
    }
    else{ cout<<"Khong co so nao thuan nghich trong mang";
    }
}
void KTMang(ll a[MAX], ll n){
    int k=0;
    for(int i=0; i<n/2; i++){
        if(a[i]!=a[n-1-i]){
            cout<<"\nMang khong doi xung!";
            break;
        }
        else{
            k++;
        }
    }
    if(k==n/2)
    cout<<"\nMang doi xung! ";
}
void latnguocmang(ll a[], ll n){
    int tem=0;
    for(int i=0; i<n/2; i++){
        tem=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=tem;
    }
    cout<<"Mang sau khi lat nguoc: \n";
    Xuat(a,n);
}
void Demgiatrikhacnhau(ll a[], ll n){
    int cnt=0;
    for(int i=0; i<n; i++){
        int dem=1;
        for(int j=0; j<i; j++){
            if(a[j]==a[i])
            dem++;
        }
        if(dem==1)
        cnt++;
    }
    cout<<"\nCo "<<cnt<<" gia tri khac nhau";
}
void Ingiatrikhac(ll a[], ll n){
    cout<<"\n";
    for(int i=0; i<n; i++){
        int dem=1;
        for(int j=0; j<i; j++){
            if(a[j]==a[i]){
            dem=0;
            break;
            }
        }
        if(dem==1){
        cout<<a[i]<<" ";
        }
    }
}
void Demtansuat(ll a[], ll n){
	cout<<"\n";
    int c[MAX]={0};
    for(int i=0; i<n; i++){
        if(c[i]==0){
            int cnt=1;
            for(int j=i+1; j<n; j++){
                if(a[i]==a[j]){
                cnt++;
                c[j]=1;
                }
            }
            cout<<"So "<<a[i]<<" xuat hien "<<cnt<<" lan!"<<endl;
        }
    }
}
void ThemPhanTu(ll a[], ll &n){
    int vitri;
    ll b;
    do{
        cout<<"\nNhap vi tri muon them phan tu: "; cin>>vitri;
    }while(!(vitri>=0 && vitri<=n));
        cout<<"Nhap phan tu muon them: "; cin>>b;
    for(int i=n; i>=vitri; i--){
        a[i+1]=a[i];
    }
    a[vitri]=b;
    n++;
    Xuat(a,n);
}
void XoaPhanTu(ll a[], ll &n){
    int vitri;
    do{
        cout<<"\nNhap vi tri muon xoa phan tu: "; cin>>vitri;
    }while(!(vitri>=0 && vitri<n));
    for(int i=vitri; i<n-1; i++){
        a[i]=a[i+1];
    }
    n--;
    Xuat(a,n);
}
void SuaPhanTu(ll a[], ll n){
    int vitri;
    ll b;
    do{
        cout<<"\nNhap vi tri muon sua phan tu: "; cin>>vitri;
    }while(!(vitri>=0 && vitri<n));
        cout<<"Nhap phan tu: "; cin>>b;
    a[vitri]=b;
    Xuat(a,n);
}
int main(){
	ll a[MAX], n;
	Nhap(a,n);
	Xuat(a,n);
	DemIn(a,n);
    KTMang(a,n);
    cout<<"\n";
    latnguocmang(a,n);
    Demgiatrikhacnhau(a,n);
    Ingiatrikhac(a,n);
    Demtansuat(a,n);
    ThemPhanTu(a,n);
    XoaPhanTu(a,n);
    SuaPhanTu(a,n);
    return 0;
}
