#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        int sum = 0;
        for (int i = 1; i*i <= n; i++){
            if (n % i == 0){
                sum += i; sum += n/i;
            }
        }
        if (sqrt(n) == (int)(sqrt(n))) sum -= (int)sqrt(n);
        cout << sum << endl;
    }
    return 0;
}