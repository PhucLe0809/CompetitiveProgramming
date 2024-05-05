#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

int degree(int a, int k, int p){
    int res = 1, cur = a;
    while (k){
        if (k % 2){
            res = (res * cur) % p;
        }
        k /= 2;
        cur = (cur * cur) % p;
    }
    return res;
}
int get_degree(int n, int p){
    int degree_num = 0;
    int u = p;
    int temp = n;
    while (u <= temp){
        degree_num += temp / u;
        u *= p;
    }
    return degree_num;
}
int combinations(int n, int k, int p){
    int num_degree = get_degree(n, p) - get_degree(n - k, p);
    int den_degree = get_degree(k, p);
    if (num_degree > den_degree) return 0;
    int res = 1;
    for (int i = n; i > n - k; i--){
        int ti = i;
        while (ti % p == 0) ti /= p;
        res = (res * ti) % p;
    }
    for (int i = 1; i <= k; ++i){
        int ti = i;
        while (ti % p == 0) ti /= p;
        res = (res * degree(ti, p-2, p)) % p;
    }
    return res;
}

void GOTOHANOI(){
    int n, k; cin >> n >> k;
    cout << combinations(n-k + 1, k, 1e9+7) << endl;
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