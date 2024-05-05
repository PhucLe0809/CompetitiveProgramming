#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int bina_min_index(vector <int> &inp, int l, int r, int key){
    while (l < r){
        int mid = (r + l)/ 2;
        if (inp[mid] < key) l = mid + 1;
        else r = mid;
    }
    return l;
}
void GOTOHANOI(){
    int n, k; cin >> n >> k;
    vector <int> inp(n+2);
    inp[0] = LONG_MIN; inp[n+1] = LONG_MAX;
    for (int i = 1; i <= n; i++) cin >> inp[i];
    while (k--){
        int num; cin >> num;
        cout << bina_max_index(inp, 0, n+1, num) << endl;
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