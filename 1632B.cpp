#include <bits/stdc++.h>

using namespace std;
int n,i;

int main(){
    // ios_base::sync_with_stdio(false);
    // cin.tie(0); cout.tie(0);
    for (cin>>n; cin>>n; ){
        for (i=n-1; i>=1<<__lg(n-1); i--) cout << i << " ";
        for (i=0; i<1<<__lg(n-1); i++) cout << i << " ";
        cout << '\n';
    }
    return 0;
}