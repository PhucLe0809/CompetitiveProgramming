#include <bits/stdc++.h>
#define maxarray 1005

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int scan[maxarray];
    while (test--){
        int n; cin >> n;
        int d, s;
        fill(scan, scan + maxarray, INT_MAX);
        for (int i = 1; i <= n; i++){
            cin >> d >> s;
            scan[d] = min(scan[d], d-1 + s);
        }
        int k = 0; bool check = false;
        for (int i = 1; i < maxarray && !check; i++){
            if (scan[i] <= i-1){
                check = true; continue;
            }
            for (int j = i-1; j >= 1 && !check; j--){
                if (scan[j] <= i-1+(i-j)){
                    check = true; continue;
                }
            }
            if (!check) k = i;
        }
        cout << k << '\n';
    }
    return 0;
}