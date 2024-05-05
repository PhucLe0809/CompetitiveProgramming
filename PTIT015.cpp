#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
int amount = 0;
int bit[25];

void update(int n){
    int cnt = 0;
    for (int i = 1; i <= n && cnt >= 0; i++){
        cnt += (bit[i] == 1)?(1):(-1);
    }
    if (cnt == 0){
        amount++;
        for (int i = 1; i <= n; i++){
            if (bit[i] == 1) cout << "("; else cout << ")";
        }
        cout << endl;
    }
}
void gen(int n, int k){
    for (int i = 1; i >= 0; i--){
        bit[k] = i;
        if (k == n) update(n);
        else gen(n, k+1);
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    gen(n, 1);
    cout << amount;
    return 0;
}