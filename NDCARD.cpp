#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, m; cin >> n >> m;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    sort(inp.begin(), inp.end());
    int answer = -1;
    for (int t = 0; t < n; t++){
        int i = 0, j = n-1, it = inp[t];
        while (i < j){
            if (i == t){ i++; continue; }
            if (j == t){ j--; continue; }
            if (inp[i] + inp[j] == m - it){
                cout << m << endl;
                return;
            }
            if (inp[i] + inp[j] < m - it){
                answer = max(answer, it + (inp[i] + inp[j]));
                i++;
            }else j--;
        }
    }
    cout << answer << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; //cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}