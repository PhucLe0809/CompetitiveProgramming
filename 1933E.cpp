#pragma GCC target ("avx2")
#pragma GCC optimize ("03")
#pragma GCC optimize ("unroll-loops")

#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    vector <int> prefix(n+1);
    for (int i = 1; i <= n; i++){
        cin >> prefix[i]; prefix[i] += prefix[i-1];
    }
    int q; cin >> q;
    while (q--){
        int l, u; cin >> l >> u;
        int r = n, pivot = l;
        while (l < r){
            int mid = (l + r + 1) / 2;
            if (prefix[mid] - prefix[pivot-1] <= u){
                l = mid;
            }else{
                r = mid - 1;
            }
        }
        if (l == n){
            cout << l << " "; 
            continue;
        }
        int k = prefix[l+1] - prefix[pivot-1], h = prefix[l] - prefix[pivot-1];
        if (k*u - k*(k-1)/2 > h*u - h*(h-1)/2) cout << l+1 << " ";
        else cout << l << " ";
    }
    cout << endl;
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