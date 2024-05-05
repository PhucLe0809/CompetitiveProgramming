#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int x, n; cin >> x >> n;
    set <int> scan;
    scan.insert(0); scan.insert(x);
    multiset <int> out;
    out.insert(x);
    for (int i = 0; i < n; i++){
        int pos; cin >> pos;
        auto it = scan.upper_bound(pos);
        int a = *it - pos;
        int b = pos - *(--it);
        int sz = out.size();
        out.erase(a+b);
        while (out.size() < sz-1) out.insert(a+b);
        out.insert(a); out.insert(b);
        cout << *(--out.end()) << " ";
        // for (auto &poi:out) cout << poi << " "; cout << endl;
        scan.insert(pos);
    }
    return 0;
}