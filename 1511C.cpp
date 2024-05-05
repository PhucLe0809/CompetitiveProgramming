#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, q; cin >> n >> q;
    vector <int> id(55, LONG_MAX);
    for (int i = 1; i <= n; i++){
        int x; cin >> x;
        if (id[x] == LONG_MAX) id[x] = i;
    }
    while (q--){
        int x; cin >> x;
        cout << id[x] << " ";
        for (int i = 1; i <= 50; i++){
            if (id[i] < id[x]) id[i]++;
        }
        id[x] = 1;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; // cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}