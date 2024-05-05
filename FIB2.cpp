#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
vector <int> fibo = {1, 1};
vector <int> cnta = {1, 0};

void init(){    
    for (int i = 2; i < 46; i++) fibo.push_back(*(--fibo.end()) + *(--(--fibo.end())));    
    for (int i = 2; i < 46; i++) cnta.push_back(*(--cnta.end()) + *(--(--cnta.end())));
}
int count_fibo(int n, int k){
    if (n <= 1) return cnta[n];
    if (k > fibo[n-2]) return cnta[n-2] + count_fibo(n-1, k - fibo[n-2]);
    return count_fibo(n-2, k);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    init();
    // a b ba bab babba babbabab babbababbabba ...
    // 1 0 1  1   2     3        5             ...
    while (test--){
        int n, k; cin >> n >> k;
        cout << count_fibo(n, k) << endl;
    }
    return 0;
}