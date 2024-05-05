#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    string l, r; int n, k;
    while (test--){
        cin >> l >> r;
        n = max(l.size(), r.size());
        while (l.size()<n) l.insert(0, "0");
        while (r.size()<n) r.insert(0, "0");
        k = 0;
        while (l[k]==r[k] && k<n) k++;
        cout << abs(r[k]-l[k])+9*max(n-k-1, 0) << '\n';
    }
    return 0;
}