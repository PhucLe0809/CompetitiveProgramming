#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
int answer = LONG_MIN;
int bi[25];

void update(int n, int w, vector <int> &inp){
    int sum = 0;
    for (int i = 1; i <= n; i++) sum += bi[i] * inp[i-1];
    if (sum <= w) answer = max(answer, sum);
}
void bina(int n, int k, int w, vector <int> &inp){
    for (int i = 0; i < 2; i++){
        bi[k] = i;
        if (k == n) update(n, w, inp);
        else bina(n, k+1, w, inp);
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m; cin >> n >> m;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    bina(n, 1, m, inp);
    cout << answer;
    return 0;
}