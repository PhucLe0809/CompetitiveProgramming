#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;
vector <int> pow5(1, 5);

int calc_zero(int num){
    int sum = 0;
    for (auto &it:pow5) sum += num / it;
    return sum;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    for (int i = 1; i < 24; i++) pow5.push_back(pow5.back() * 5);
    while (test--){
        int m; cin >> m;
        int l = 0, r = 5*m;
        while (l <= r){
            int mid = (l + r) / 2;
            int amount = calc_zero(mid);
            if (amount >= m) r = mid - 1;
            else l = mid + 1;
        }
        cout << l << endl;
    }
    return 0;
}