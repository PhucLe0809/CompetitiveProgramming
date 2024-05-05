#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while(test--){
        int n, m, k, hv; cin >> n >> m >> k >> hv;
        vector <int> h(n);
        for (int i = 0; i < n; i++) cin >> h[i];
        sort(h.begin(), h.end());
        vector <int> dis(n);
        for (int i = 0; i < n; i++) dis[i] = abs(hv - h[i]);
        int answer = 0;
        for(auto &v:dis){
            if(v%k == 0){
                v /= k;
                if (v <= m-1 && v >= 1) answer++;
            }
        }
        cout << answer << '\n';
    }
    return 0;
}