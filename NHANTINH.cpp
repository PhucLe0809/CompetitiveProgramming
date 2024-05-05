#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define maxarray 100005

using namespace std;
int inp[maxarray];

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    bool check = (inp[1] == 1 || inp[1] == 0);
    for (int i = 2; i <= n && check; i++){
        for (int j = 2; j*j <= i && check; j++){
            if (i % j == 0){
                check = check && (inp[i] == inp[j] * inp[i/j]);
            }
        }
    }
    if (check) cout << "YES"; else cout << "NO";
    return 0;
}