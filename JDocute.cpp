#include <bits/stdc++.h>

using namespace std;

bool check(int64_t x, int64_t nb, int64_t ns, int64_t nc, int64_t pb, int64_t ps, int64_t pc, int64_t cb, int64_t cs, int64_t cc, int64_t r){
    int64_t cost = max(0ll, cb*x - nb)*pb + max(0ll, cs*x - ns)*ps + max(0ll, cc*x - nc)*pc;
    if (cost <= r) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t i, j, nb, ns, nc, pb, ps, pc, r, cb = 0, cs = 0, cc = 0;
    string s; cin >> s;
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;
    for (auto x : s)
    {
        if (x == 'B')
            cb++;
        else if (x == 'S')
            cs++;
        else if (x == 'C')
            cc++;
    }
    int64_t low = 0, high = r + max({nb, ns, nc});
    int64_t ans = 0;
    while (low <= high){
        int64_t mid = low + (high - low)/2;
        if (check(mid, nb, ns, nc, pb, ps, pc, cb, cs, cc, r) == true){
            ans = max(ans, mid);
            low = mid + 1;
        }else high = mid - 1;
    }
    cout << ans << '\n';
    return 0;
}