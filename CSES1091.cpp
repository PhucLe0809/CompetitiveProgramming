#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    multiset <int> ticket;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        ticket.insert(x);
    }
    for (int i = 0; i < m; i++){
        int x; cin >> x;
        auto it = ticket.upper_bound(x);
        if (it == ticket.begin()){
            cout << -1 << '\n';
            continue;
        }
        cout << *(--it) << '\n';
        ticket.erase(it);
    }
    return 0;
}