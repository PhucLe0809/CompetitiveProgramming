#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#include <bits/stdc++.h>
#define int long long
#define inf LLONG_MAX
#define endl '\n'

using namespace std;

bool is_good(vector<int> &people, int &m, int &x){
    int cnt = 0;
    for (auto &it:people){
        cnt += x / it;
        if (cnt >= m) return true;
    }
    return false;
}
void GOTOHANOI(){
    int n, m; cin >> n >> m;
    vector <int> people(n);
    for (auto &it:people) cin >> it;

    sort(people.begin(), people.end());
    int l = 0, r = 1e18 + 5;
    while (l < r){
        int mid = l + (r - l) / 2;
        if (!is_good(people, m, mid)) l = mid + 1;
        else r = mid;
    }
    cout << l << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }

    return 0;
}