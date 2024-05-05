#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        vector <int> h(n+1); 
        for (int i = 1; i <= n; i++) cin >> h[i];
        deque <int> dq;
        vector <int> lmin(n+1); dq.clear();
        for (int k = 1; k <= n; k++){
            while (dq.size() && h[dq.back()] >= h[k]) dq.pop_back();
            if (dq.size()) lmin[k] = dq.back()+1;
            else lmin[k] = 1;
            dq.push_back(k);
        }
        vector <int> rmin(n+1); dq.clear();
        for (int k = n; k >= 1; k--){
            while (dq.size() && h[dq.back()] >= h[k]) dq.pop_back();
            if (dq.size()) rmin[k] = dq.back()-1;
            else rmin[k] = n;
            dq.push_back(k);
        }
        int l, r, calc, answer = 0;
        for (int i = 1; i <= n; i++){
            calc = max(answer, (rmin[i] - lmin[i] + 1)*h[i]);
            if (answer < calc){
                answer = calc; l = lmin[i]; r = rmin[i];
            }
        }
        cout << answer << " " << l << " " << r << '\n'; 
    }
    return 0;
}