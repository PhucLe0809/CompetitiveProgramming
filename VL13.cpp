#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_perfect(int n){
    if (n < 1) return false;
    int sum = 1;
    for (int i = 2; i <= (int)round(sqrt(n)); i++){
        if (n % i == 0){
            sum += i; sum += n/i;
        }
    }
    if (sqrt(n) == (int)(sqrt(n))) sum -= (int)(sqrt(n));
    return (n == sum);
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    (is_perfect(n)) ? (cout << "YES"):(cout << "NO");
    return 0;
}