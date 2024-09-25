#include <bits/stdc++.h>
using namespace std;
// push_back(a) *
// size: tra ve so luong phan tu trong vector
// memset *
// pop_back: xoa phan tu cuoi. Vd: a.pop_back(); *
// erase: xoa phan tu thong qua iterator *
// luu y: ham arase khong xet lay can cuoi vd: a.erase(a.begin()+x, a.begin()+y); luc nay no chi xet can [x,y);
// arase: O(n)
// vector khong phu hop voi them xoa phan tu, chi phu hop voi cac bai toan nhu mang 1 chieu
// insert: them phan tu.Cu phap: insert(vitri, giatri) *
// clear: xoa cac phan tu trong vector.vd: a.clear() *
int main(){
	vector<long long> a;
	a.push_back(100); // chi so 0
	a.push_back(200); // chi so 1
	a.push_back(300); // chi so 2
	a.push_back(300); 
	a.push_back(300);
	a.push_back(300);
	a.push_back(300);
	a.push_back(300);
	a.push_back(300); // chi so 8
	cout<< a[0] <<' '<<a[1]<<' '<<a[2]<<' '<<a[3]<<' '<<a[4]<<' '<<a[5]<<' '<<a[6]<<' '<<a[7]<<' '<<a[8]<<endl;
	cout<<a.size()<<endl;
	a.pop_back(); // xoa phan tu cuoi
	a.erase(a.begin()+0); // xoa phan tu o chi so 0
	for(int i=0; i<a.size(); i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	for(int i=a.size()-1; i>=0; i--){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	for(vector<long long>:: iterator it = a.begin(); it !=a.end(); ++it){
		cout<<*it<<' ';		
	}
	// iterator duoc hieu nhu la no quan sat cac phan tu ben trong mang
	// a.begin la tro vao vi tri dau tien cua mang 
	// a.end la tro vao sau vi tri cuoi cung cua mang
	// vd mang co 3 phan tu(a[0] a[1] a[2]) thi vi tri dau tien la 0 va sau vi tri cuoi cung la 3
	// a.begin() + x => a[x]
	cout<<endl;
	cout<<"In ra gia tri cua con tro iterator tro toi vi tri 1: "<<*(a.begin()+1); // in ra 200
	cout<<"\n\n\n";
	// duyet mang vector
	int n;
	cin>>n;
// cach 1:
	cout<<"Duyet mang cach 1:"<<endl;
	vector<int > b(n);
	for(int i=0; i<n; i++){ 
		cin>>b[i]; // nhap gia tri cho cac phan tu
	}
	for(int i=0; i<n; i++){
		cout<<b[i]<<" ";		
	}
	cout<<"\nSo luong phan tu trong mang: "<<b.size()<<endl; 
// cach 2 
	cout<<"Duyet mang cach 2:"<<endl;
	vector <int> c(n,100); // cac phan tu deu co gia tri 100
	for(int i=0; i<n; i++){
		cout<<c[i]<<" ";
	}
	cout<<"\nSo luong phan tu trong mang: "<<c.size(); // kich thuoc mang c
	// ham memset chi gan cho tat ca cac phan tu la 0 hoac  -1 vi no gan cho o nho chu khong phai gan cho tung phan tu
	cout<<"\n";
	int k[100];
	memset(k,-1,sizeof(k)); // cu phap ten mang, gia tri gan, kich thuoc mang
	for(int i=0; i<n; i++){
		cout<<k[i]<<" ";
	}						
}

