#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, s; cin >> n >> s;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    int i = 0, j = 0, sum = 0, cnt = 0;
    while (i < n){
        while (j < n && sum < s) sum += inp[j++];
        if (sum < s) break;
        cnt += (n - j + 1);
        sum -= inp[i];
        i++;
    }
    cout << cnt << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; //cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}