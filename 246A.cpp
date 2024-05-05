#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    if (n<=2) cout << -1;
    else{
        for (int i = n; i > 0; i--) cout << i << " ";
    }
    return 0;
}