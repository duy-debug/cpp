#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define max 100
void Nhap(int a[][max], int &n, int &m){
    printf("Nhap dong: "); scanf("%d", &n);
    printf("Nhap cot: "); scanf("%d", &m);
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++){
        printf("a[%d][%d]= ", i,j);
        scanf("%d", &a[i][j]);
    }
}
void Xuat(int a[][max], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%6d", a[i][j]);
        }
        printf("\n");
    }
}
void Tim_MINMAX(int a[][max], int n, int m){
    int MIN=a[0][0];
    int MAX=a[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(MIN>a[i][j]){
                MIN=a[i][j];
            }
            if(MAX<a[i][j]){
                MAX=a[i][j];
            }
        }
    }
    printf("Gia tri nho nhat: %d", MIN);
    printf("\nGia tri lon nhat: %d", MAX);
}
void TBC_DCC(int a[][max], int n){
    float tbc=0, dem=0;
    for(int i=0; i<n; i++){
        tbc+=a[i][i];
        dem++;
    }
    printf("\nTBC duong cheo chinh: %.2f", tbc/dem);
}
void TBC_TrenDCC(int a[][max], int n){
    float tbc=0, dem=0;
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++){
        if(j>i){
            tbc+=a[i][j];
            dem++;
        }
    }
    printf("\nTBC tam giac tren duong cheo chinh: %.2f", tbc/dem);
}
void TBC_DuoiDCC(int a[][max], int n){
    float tbc=0, dem=0;
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++){
        if(i>j){
            tbc+=a[i][j];
            dem++;
        }
    }
    printf("\nTBC tam giac duoi duong cheo chinh: %.2f", tbc/dem);
}
void TBC_DCP(int a[][max], int n){
    float tbc=0, dem=0;
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++){
        if(i+j==n-1){
        tbc+=a[i][j];
        dem++;
        }
    }
    printf("\nTBC duong cheo phu: %.2f", tbc/dem);
}
void TBC_TrenDCP(int a[][max], int n){
    float tbc=0, dem=0;
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++){
        if(i+j<n-1){
            tbc+=a[i][j];
            dem++;
        }
    }
    printf("\nTBC tam giac tren duong cheo phu: %.2f", tbc/dem);
}
void TBC_DuoiDCP(int a[][max], int n){
    float tbc=0, dem=0;
    for(int i=0; i<n; i++)
    for(int j=0; j<n; j++){
        if(i+j>n-1){
            tbc+=a[i][j];
            dem++;
        }
    }
    printf("\nTBC tam giac duoi duong cheo phu: %.2f", tbc/dem);
}
bool KT_SNT(int n){
    if(n<2) 
    return 0;
    for(int i=2; i<=sqrt(n); i++)
    if(n%i==0)
    return 0;
        return 1;
}
void LietkeSNT(int a[][max], int n, int m){
    int dem=0;
    printf("\nLiet ke phan tu la so nguyen to neu co: ");
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++){
        if(KT_SNT(a[i][j])){
        printf("    %d", a[i][j]);
        dem=1;
        }
    }
    if(dem==0)
    printf("\nTrong ma tran khong co phan tu la so nguyen to!");
}
bool KT_sodoixung(int n){
    int k=n, p=0;
    while(n!=0){
        p=p*10+n%10;
        n/=10;
    }
    if(p==k)
    return 1;
        return 0;
}
void Lietkesodoixung(int a[][max], int n, int m){
    printf("\nLiet ke phan tu la so doi xung neu co: ");
    int dem=0;
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++){
        if(KT_sodoixung(a[i][j])){
            printf("    %d", a[i][j]);
            dem=1;
        }
    }
    if(dem==0)
    printf("\nKhong co phan tu la so doi xung trong ma tran!");
}
bool KT_sohoanhao(int n){
   int sum=0;
   for(int i=1; i<=sqrt(n); i++){
   		if(n%i==0){
   			sum+=i;
		} 
   		if(i!=n/i) sum+=n/i;
   }
   if(sum-n==n) return 1;
   else return 0;
}
void Lietkesohoanhao(int a[][max], int n, int m){
    int dem=0;
    printf("\nLiet ke phan tu la so hoan hao neu co: ");
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++){
        if(KT_sohoanhao(a[i][j])){
            printf("    %d", a[i][j]);
            dem=1;
        }
    }
    if(dem==0)
    printf("\nTrong ma tran khong co phan tu la so hoan hao!");
}
bool KT_sofibonacci(int n){
    long long b[max];
    b[0]=0, b[1]=1;
    for(int i=2; i<=92; i++){
        b[i]=b[i-1]+b[i-2];
    }
    for(int i=0; i<=92; i++){
        if(n==b[i])
        return 1;
    }
    return 0;
}
void Lietkesofibonacci(int a[][max], int n, int m){
    int dem=0;
    printf("\nLiet ke phan tu la so fibonacci neu co: ");
    for(int i=0; i<n; i++)
    for(int j=0; j<m; j++){
        if(KT_sofibonacci(a[i][j])){
            printf("    %d", a[i][j]);
            dem=1;
        }
    }
    if(dem==0)
    printf("\nTrong ma tran khong co phan tu la fibonacci!");
}
bool KT_sochinhphuong(int n){
    if(n==0) return 0;
    int can=sqrt(n);
    if(can*can==n)
    return 1;
        return 0;
}
void LietkeSCP(int a[][max], int n, int m){
    int dem=0;
    printf("\nLiet ke phan tu la so chinh phuong neu co: ");
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(KT_sochinhphuong(a[i][j])){
                dem=1;
                printf("    %d", a[i][j]);
            }
        }
    }
    if(dem==0)
    printf("\nTrong ma tran khong co phan tu la so chinh phuong!");
}
void TongHangTongCot(int a[][max], int n, int m){
    for(int i=0; i<n; i++){
        int tong=0;
        for(int j=0; j<m ;j++){
            tong+=a[i][j];
        }
        printf("\nTong dong %d: %d", i, tong);
    }
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<m; j++){
            sum+=a[j][i];    
        }
        printf("\nTong cot %d: %d", i, sum);
    }
}
void TimdongchuanhieuSNT(int a[][max], int n, int m){
    int t=0, k=-1;
    int dem;
    for(int i=0; i<n; i++){
          dem=0;
        for(int j=0; j<m; j++){
            if(KT_SNT(a[i][j])){
            dem++;
        }
        if(dem>=t){
            t=dem;
            k=i;
            }
        }
    }
        printf("\nDong %d co nhieu phan tu nguyen to nhat!",k);
        printf("\nDong %d co %d phan tu nguyen to!", k, t);
}
void TimcotchuanhieuSNT(int a[][max], int n, int m){
    int t=0, k=-1;
    int dem;
    for(int i=0; i<n; i++){
          dem=0;
        for(int j=0; j<m; j++){
            if(KT_SNT(a[i][j])){
            dem++;
        }
        if(dem>=t){
            t=dem;
            k=i;
            }
        }
    }
        printf("\nCot %d co nhieu phan tu nguyen to nhat!",k);
        printf("\nCot %d co %d phan tu nguyen to!", k, t);
}
void HoanVi2Dong(int a[][max], int n, int m){
    int d1, d2;
    do{
        printf("\nDong muon hoan vi: "); scanf("%d", &d1);
        printf("Dong muon hoan vi: "); scanf("%d", &d2);
    }while(!(d1>=0 && d1<n && d2>=0 && d2<n && d1!=d2));
    for(int j=0; j<m; j++){
        int tem=a[d1][j];
        a[d1][j]=a[d2][j];
        a[d2][j]=tem;
    }
    printf("Ma tran sau khi hoan vi dong: \n");
    Xuat(a,n,m);
}
void HoanVi2Cot(int a[][max], int n, int m){
    int c1, c2;
    do{
        printf("\nCot muon hoan vi: "); scanf("%d", &c1);
        printf("Cot muon hoan vi: "); scanf("%d", &c2);
    }while(!(c1>=0 && c1<m && c2>=0 && c2<m && c1!=c2));
    for(int i=0; i<n; i++){
        int tem=a[i][c1];
        a[i][c1]=a[i][c2];
        a[i][c2]=tem;
    }
    printf("Ma tran sau khi hoan vi cot: \n");
    Xuat(a,n,m);
}
void swap(int &x, int &y){
    int tem=x;
    x=y;
    y=tem;
}
void Sapxeptang(int b[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(b[i]>b[j])
            swap(b[i],b[j]);
        }
    }
}
void Sapxeptang1(int a[][max], int n, int m){
    for(int i=0; i<n; i++){
        int b[max]={0}, dem=0;
        for(int j=0; j<m; j++){
                b[dem++]=a[i][j];
            }
            Sapxeptang(b,dem);
            for(int p=0; p<dem; p++){
                a[i][p]=b[p];
            }
        }
    printf("Ma tran sau khi sap xep tang dan cac hang: \n");
    Xuat(a,n,m);
}
void Sapxepgiam(int b[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(b[i]<b[j])
            swap(b[i],b[j]);
        }
    }
}
void Sapxepgiam1(int a[][max], int n, int m){
    for(int i=0; i<n; i++){
        int b[max]={0}, dem=0;
        for(int j=0; j<m; j++){
            b[dem++]=a[i][j];
        }
        Sapxepgiam(b,dem);
        for(int p=0; p<dem; p++){
            a[i][p]=b[p];
        }
    }
    printf("Ma tran sau khi sap xep giam dan cac hang: \n");
    Xuat(a,n,m);
}
void Sxepmatrantang(int a[][max], int n, int m){
    printf("Ma tran sau khi sap xep tang dan: \n");
    int b[max*max];
    int dem=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            b[dem++]=a[i][j];
        }
    }
    Sapxeptang(b,dem);
    dem=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j]=b[dem++];
        }
    }
    Xuat(a,n,m);
}
void Sxepmatrangiam(int a[][max], int n, int m){
    printf("Ma tran sau khi sap xep giam dan: \n");
    int b[max];
    int dem=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            b[dem++]=a[i][j];
        }
    }
    Sapxepgiam(b,dem);
    dem=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            a[i][j]=b[dem++];
        }
    }
    Xuat(a,n,m);
}
void KT_dongtangdan(int a[][max], int n, int m){
    int d;
    int b[max], dem=0;
    printf("Nhap dong muon kiem tra co tang dan: ");
    scanf("%d", &d);
    for(int j=0; j<m-1; j++){
        if(a[d][j]>a[d][j+1]){
            printf("Dong %d khong tang \n", d);
            printf("Dong %d sau khi thay doi: \n", d);
            for(int i=0; i<m; i++){
                b[dem++]=a[d][i];
            }
            Sapxeptang(b,dem);
            for(int p=0; p<dem; p++){
                a[d][p]=b[p];
            }
            break;
        }
    }
    if(dem==0)
    printf("Dong %d tang dan!\n", d);
    Xuat(a,n,m);
}
void KT_cotgiamdan(int a[][max], int n, int m){
    int b[max], dem=0;
    int c;
    printf("Nhap cot muon kiem tra giam dan: \n");
    scanf("%d", &c);
    for(int i=0; i<n-1; i++){
        if(a[i][c]<a[i+1][c]){
            printf("Cot %d khong giam dan: \n", c);
            printf("Cot %d sau khi thay the: \n", c);
            for(int j=0; j<n; j++){
                b[dem++]=a[j][c];
            }
            Sapxepgiam(b,dem);
            for(int p=0; p<dem; p++){
                a[p][c]=b[p];
            }
            break;
        }
    }
    if(dem==0)
    printf("Cot %d giam dan!\n", c);
    Xuat(a,n,m);
}
int main(){
    int a[max][max];
    int n;
    int m;
    Nhap(a,n,m);
    printf("Ma tran vua nhap: \n");
    Xuat(a,n,m);
    Tim_MINMAX(a,n,m);
    if(n==m){
        TBC_DCC(a,n);
        TBC_TrenDCC(a,n);
        TBC_DuoiDCC(a,n);
        TBC_DCP(a,n);
        TBC_TrenDCP(a,n);
        TBC_DuoiDCP(a,n);
    }
    LietkeSNT(a,n,m);
    Lietkesodoixung(a,n,m);
    Lietkesohoanhao(a,n,m);
    Lietkesofibonacci(a,n,m);
    LietkeSCP(a,n,m);
    TongHangTongCot(a,n,m);
    TimdongchuanhieuSNT(a,n,m);
    TimcotchuanhieuSNT(a,n,m);
    HoanVi2Dong(a,n,m);
    HoanVi2Cot(a,n,m);
    Sapxeptang1(a,n,m);
    Sapxepgiam1(a,n,m);
    Sxepmatrantang(a,n,m);
    Sxepmatrangiam(a,n,m);
    KT_dongtangdan(a,n,m);
    KT_cotgiamdan(a,n,m);
    return 0;
}
