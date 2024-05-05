#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, m; cin >> n >> m;
    vector <int> one(n), two(m);
    for (auto &it:one) cin >> it;
    for (auto &it:two) cin >> it;
    sort(one.begin(), one.end());
    sort(two.begin(), two.end());
    int cnt, i, j, x, y; cnt = 0;
    i = x = 0; j = n-1; y = m-1;
    int sdiff = 0;
    vector <int> test(4);
    while (cnt < n){
        test[0] = abs(one[i] - two[x]);
        test[1] = abs(one[i] - two[y]);
        test[2] = abs(one[j] - two[x]);
        test[3] = abs(one[j] - two[y]);
        int maxx = *max_element(test.begin(), test.end());
        sdiff += maxx; cnt++;
        if (maxx == test[0]){
            i++; x++; continue;
        }
        if (maxx == test[1]){
            i++; y--; continue;
        }
        if (maxx == test[2]){
            j--; x++; continue;
        }
        if (maxx == test[3]){
            j--; y--; continue;
        }
    }
    cout << sdiff << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}