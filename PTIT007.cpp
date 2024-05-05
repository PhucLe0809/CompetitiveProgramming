#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
vector <int> scan;
int bit[12];

void update(int n){
    int num = 0;
    for (int i = 1; i <= n; i++) num += bit[i] * pow(3, i-1);
    scan.push_back(num);
}
void gen(int n, int k){
    for (int i = 0; i < 2; i++){
        bit[k] = i;
        if (k == n) update(n); else gen(n, k+1);
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    gen(10, 1);
    sort(scan.begin(), scan.end());
    while (test--){
        int n; cin >> n;
        cout << *lower_bound(scan.begin(), scan.end(), n) << endl;
    }
    return 0;
}