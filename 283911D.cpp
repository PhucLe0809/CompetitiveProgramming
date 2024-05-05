#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int bina_max_index(vector <int> &inp, int l, int r, int key){
    while (l < r){
        int mid = (l + r + 1) / 2;
        if (inp[mid] > key) r = mid - 1;
        else l = mid;
    }
    return l;
}
int bina_min_index(vector <int> &inp, int l, int r, int key){
    while (l < r){
        int mid = (l + r) / 2;
        if (inp[mid] < key) l = mid + 1;
        else r = mid;
    }
    return l;
}
void GOTOHANOI(){
    int n; cin >> n;
    vector <int> inp(n+2);
    for (int i = 1; i <= n; i++) cin >> inp[i];
    inp[0] = LONG_MIN; inp[n+1] = LONG_MAX;
    sort(inp.begin(), inp.end());
    int q; cin >> q;
    while (q--){
        int l, r; cin >> l >> r;
        int a = bina_min_index(inp, 0, n+1, l);
        int b = bina_max_index(inp, 0, n+1, r);
        cout << b - a + 1 << " ";
    }
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