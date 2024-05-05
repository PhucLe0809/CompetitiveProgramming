#include <bits/stdc++.h>
#define int long long
#define endl '\n'
#define mod 1000000007

using namespace std;
struct matrix{
    int a[2][2] = {{0, 0}, {0, 0}};
    matrix operator * (const matrix& other) const{
        matrix product;
        for(int i : {0, 1}){
            for(int j : {0, 1}){
                for(int k : {0, 1}){
                    product.a[i][j] = (product.a[i][j] + a[i][k] * other.a[k][j]) % mod;
                }
            }
        }
        return product;
    }
};
matrix expo_power(matrix a, int n) {
    matrix res;
    res.a[0][0] = res.a[1][1] = 1;
    while (n){
        if (n % 2 != 0) res = res * a;
        n /= 2;
        a = a * a;
    }
    return res;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    matrix single;
    single.a[0][0] = 0;
    single.a[0][1] = 1;
    single.a[1][0] = 1;
    single.a[1][1] = 1;
    cout << expo_power(single, n).a[1][1] << endl;
}