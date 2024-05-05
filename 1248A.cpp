#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, m, x;
    while (test--){
        cin >> n;
        int64_t odd_a = 0, even_a = 0;
        for (int i = 0; i < n; i++){
            cin >> x; 
            if (x&1) odd_a++; else even_a++;
        }
        cin >> m;
        int64_t odd_b = 0, even_b = 0;
        for (int i = 0; i < m; i++){
            cin >> x;
            if (x&1) odd_b++; else even_b++;
        }
        cout << odd_a*odd_b + even_a*even_b << '\n';
    }
    return 0;
}