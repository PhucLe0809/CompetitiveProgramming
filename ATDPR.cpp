#include <bits/stdc++.h>
#define mod 1000000007

using namespace std;
struct Matrix{
    int64_t matrix[55][55];
};

Matrix multi(Matrix a, Matrix b, int n){
    Matrix res;
    memset(res.matrix, 0, sizeof(res.matrix));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            for (int k = 0; k < n; k++){
                res.matrix[i][j] = (res.matrix[i][j] + (a.matrix[i][k]*b.matrix[k][j])%mod) % mod;
            }
        }
    }
    return res;
}
Matrix calc(Matrix inp, int n, int64_t k){
    Matrix res;
    memset(res.matrix, 0, sizeof(res.matrix));
    for (int i = 0; i < n; i++) res.matrix[i][i] = 1;
    while (k > 0){
        if (k & 1) res = multi(res, inp, n);
        inp = multi(inp, inp, n);
        k >>= 1;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; int64_t k; cin >> n >> k;
    Matrix inp;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> inp.matrix[i][j];
        }
    }
    Matrix scan = calc(inp, n, k);
    int64_t answer = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            answer = (answer + scan.matrix[i][j]) % mod;
        }
    }
    cout << answer;
    return 0;
}