#include <bits/stdc++.h>
using namespace std;
// erase() O(LogN): Xoa mot phan tu khoi set.
int main(){
    set<int> a;
    for(int i=1; i<=5; i++) a.insert(i);
    a.erase(3);
    for(int x: a) cout<<x<<" ";
}
