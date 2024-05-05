#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k; cin >> n >> k;
    vector <int> inp(n);
    for (auto &it:inp) cin >> it;
    deque <int> qmin, qmax;
    for (int i = 0; i < n; i++){
        while (qmin.size() && inp[qmin.back()] > inp[i]) qmin.pop_back();
        while (qmax.size() && inp[qmax.back()] < inp[i]) qmax.pop_back();
        qmin.push_back(i); qmax.push_back(i);
        if (qmin.front() < i - k + 1) qmin.pop_front();
        if (qmax.front() < i - k + 1) qmax.pop_front();
        if (i - k + 1 < 0) continue;
        cout << inp[qmin.front()] << " " << inp[qmax.front()] << endl;
    }
    return 0;
}