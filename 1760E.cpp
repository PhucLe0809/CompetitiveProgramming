#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    int sum, zero, one;
    sum = zero = one = 0;
    for (auto &it:inp){
        zero += (it == 0);
        one += (it == 1);
        (it == 0)?(sum += one):(sum);
    }
    int answer = sum, cnt0 = 0, cnt1 = 0;
    for (auto &it:inp){
        cnt0 += (it == 0);
        cnt1 += (it == 1);
        if (it == 0) answer = max(answer, sum - cnt1 + (zero - cnt0));
        else answer = max(answer, sum + cnt1-1 - (zero - cnt0));
    }
    cout << answer << endl;
    // cout << max(sum - a + (zero - ida), sum + b - (zero - idb)) << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}