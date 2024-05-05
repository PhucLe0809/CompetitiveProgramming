#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

bool is_prime(int &num){
    if (num < 2) return false;
    for (int i = 2; i <= (int)round(sqrt(num)); i++){
        if (num % i == 0) return false;
    }
    return true;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    set <int> st;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        if (is_prime(x)) st.insert(x);
    }
    for (auto &it:st) cout << it << " ";
    return 0;
}