#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, m;
    while (test--){
        cin >> n >> m;
        cout << "W";
        for (int j = 1; j < m; j++) cout << "B"; cout << '\n';
        for (int i = 1; i < n; i++){
            for (int j = 0; j < m; j++){
                cout << "B";
            }
            cout << '\n';
        }
    }
    return 0;
}