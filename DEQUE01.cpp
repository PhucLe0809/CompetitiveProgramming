#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, k; cin >> n >> k;
    vector <int> inp(n), scan;
    deque <int> dq;
    for (int i = 0; i < n; i++){
        cin >> inp[i];
        while (!dq.empty() && inp[dq.back()] >= inp[i]) dq.pop_back();
        dq.push_back(i);
        if (dq.front() < i-k+1) dq.pop_front();
        if (i-k+1 >= 0) scan.push_back(inp[dq.front()]);
    }
    for (auto &it:scan) cout << it << " ";
    return 0;
}