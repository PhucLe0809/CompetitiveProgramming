#include <bits/stdc++.h>
#define inf 1000000000000000007

using namespace std;
int64_t answer = inf;
vector <int64_t> inp, ind;

void compact(int n){
    int64_t a = 0, b = 0;
    for (int i = 0; i < n; i++){
        (ind[i])?(a += inp[i]):(b += inp[i]);
    }
    answer = min(answer, abs(a - b));
}
void try_bin(int n, int k){
    for (int i = 0; i < 2; i++){
        ind[k] = i;
        if (k == n-1) compact(n);
        else try_bin(n, k+1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    inp.resize(n); ind.resize(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    try_bin(n, 0);
    cout << answer;
    return 0;
}