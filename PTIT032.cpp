#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <int> inp(n+2);
    for (int i = 1; i <= n; i++) cin >> inp[i];
    inp[0] = inp[n+1] = LONG_MIN;
    int len;
    vector <int> left(n+2); left[1] = 0;
    len = 0;
    for (int i = 2; i <= n; i++){
        (inp[i] > inp[i-1])?(len++):(len = 0);
        left[i] = len;
    }
    vector <int> right(n+2); right[n] = 0;
    len = 0;
    for (int i = n-1; i > 0; i--){
        (inp[i] > inp[i+1])?(len++):(len = 0);
        right[i] = len;
    }
    for (int i = 1; i <= n; i++){
        cout << left[i] + right[i] + 1 << " ";
    }
    return 0;
}