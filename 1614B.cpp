#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n; int64_t calc;
    while (test--){
        cin >> n;
        vector <pair<int, int>> inp(n), scan(n);
        for (int i = 0; i < n; i++){
            cin >> inp[i].first; inp[i].second = i;
            scan[i] = inp[i];
        }
        sort(scan.begin(), scan.end(), greater<>());
        calc = 0;
        for (int i = 0; i < n; i++){
            inp[scan[i].second].second = (i%2==0)?((i+2)/2):(-(i+2)/2);
            calc += 2LL*abs(inp[scan[i].second].second)*scan[i].first;
        }
        cout << calc << '\n';
        cout << 0 << " ";
        for (int i = 0; i < n; i++) cout << inp[i].second << " ";
        cout << '\n';
    }
    return 0;
}