#include <iostream>
#define ll long long
using namespace std;
//Big O
//1. Cac phep toan cong tru, nhan, chia, truy cap mang, cin, cout, hang so: O(1)
//2. Do phuc tap O(LogN): tinh tong uoc, check so nguyen to
//3. Do phuc tap O(N): Tuyen tinh
//4. Do phuc tap O(Nlog(LogN)): sang so nguyen to
//5. Do phuc tap O(NlogN):
//6. O(n^2)
//7. O(n^3)
//8. O(2^n)
//9. O(n!)
// vector, pair
// ham sort
// pair la mot kiet du lieu co the luu dc 2 bien di kem voi nhau vd: nhu toan do x, y
int main(){
//cach 1:	cin>>a.first; first la bien thu nhat
//			cin>>a.second; second la bien thu hai
//	cout<<a.first<<" "<<a.second<<endl;
// cach 2: pair<ll, ll> a= make_pair(100,200); hoac pair<ll, ll> a= {100,200};
	ll n; cin>>n;
	pair<ll, ll> a[100]; // 100 phan tu
	for(int i=0; i<n; i++){
		cin>>a[i].first >> a[i].second;
		cout<<a[i].first<<' '<<a[i].second<<endl;
	}
	pair<ll , pair<ll, ll> > b; // long pair
	cin>>b.first>>b.second.first>>b.second.second;
	cout<< b.first<<endl;
	cout<<b.second.first<<endl;
	cout<<b.second.second;
}
