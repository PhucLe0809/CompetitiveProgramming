#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int two = 0, pow2 = 1;
    for (int i = 1; i < 32; i++){
        pow2 *= 2;
        two += n / pow2;
    }
    int five = 0, pow5 = 1;
    for (int i = 1; i < 20; i++){
        pow5 *= 5;
        five += n/pow5;
    }
    cout << min(two, five);
    return 0;
}