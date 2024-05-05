#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    map <int, int> mp;
    deque <int> dq;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        if (mp[x]==0){
            if (dq.size()==k){
                mp[dq.front()]--;
                dq.pop_front();
            }
            dq.push_back(x); mp[x]++;
        }
    }
    reverse(dq.begin(), dq.end());
    cout << dq.size() << '\n';
    for (auto &it:dq) cout << it << " ";
    return 0;
}