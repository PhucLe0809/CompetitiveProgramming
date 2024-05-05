#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int64_t n, m, s; bool check;
    int64_t a[105], b[105];
    while (test--){
        cin >> n >> m;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int j = 0; j < m; j++) cin >> b[j];
        sort(a, a+n);
        for (int j = 0; j < m; j++){
            check = false;
            for (int i = 0; i < n; i++){
                if (a[i]<b[j]){
                    a[i] = b[j]; 
                    check = true;
                    break;
                }
            }
            if (!check) a[0] = b[j];
            sort(a, a+n);
        }
        s = 0;
        for (int i = 0; i < n; i++) s += a[i];
        cout << s << '\n';
    }
    return 0;
}