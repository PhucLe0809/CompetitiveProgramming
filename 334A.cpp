#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n/2; j++){
            cout << ((i-1)*(n/2)+j) << " ";
            cout << (n*n-((i-1)*(n/2)+j)+1) << " ";
        }
        cout << '\n';
    }
    return 0;
}