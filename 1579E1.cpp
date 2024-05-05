#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, x;
    while (test--){
        cin >> n;
        deque <int> dq;
        for (int i = 0; i < n; i++){
            cin >> x;
            if (x<=dq.front()) dq.push_front(x);
            else dq.push_back(x);
        }
        for (auto it:dq) cout << it << " ";
        cout << '\n';
    }
    return 0;
}