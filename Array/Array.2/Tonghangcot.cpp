#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int main(){
    int n, m; cin>>n>>m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>a[i][j];
    }
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<m; j++){
            sum+=a[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=0; j<m; j++){
            sum+=a[j][i];
        }
        cout<<sum<<" ";
    }
}
