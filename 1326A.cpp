#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n;
    while (test--){
        cin >> n;
        if (n==1){
            cout << "-1\n"; continue;
        }
        cout << "2";
        for (int i = 1; i < n; i++) cout << "9";
        cout << '\n';
    }
    return 0;
}