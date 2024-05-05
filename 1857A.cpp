#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        int a = 0, b = 0, x;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x%2!=0) b++; else a++;
        }
        if (b%2==0){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}