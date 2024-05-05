#include <bits/stdc++.h>

using namespace std;
vector <int> l(1005), r(1005);

int scan(vector <int> &h, int n){
    stack <int> sta;
    for (int i = 1; i <= n; i++){
        while (!sta.empty() && h[sta.top()]>=h[i]) sta.pop();
        l[i] = 0;
        if (!sta.empty()) l[i] = sta.top();
        sta.push(i);
    }
    while (!sta.empty()) sta.pop();
    for (int i = n; i >= 1; i--){
        while (!sta.empty() && h[sta.top()]>=h[i]) sta.pop();
        r[i] = n+1;
        if (!sta.empty()) r[i] = sta.top();
        sta.push(i);
    }
    int out = 0;
    for (int i = 1; i <= n; i++){
        if (h[i]!=0) out = max(out, (r[i] - l[i] - 1)*h[i]);
    }
    return out;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int m, n; cin >> m >> n;
    int x, answer = 0;
    vector <int> h(n+2); h[0] = h[n+1] = 0;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> x;
            if (x==1) h[j]++;
            else h[j] = 0;
        }
        answer = max(answer, scan(h, n));
    }
    cout << answer;
    return 0;
}