#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, k, d, answer, tmp;
    while (test--){
        cin >> n >> k >> d;
        vector <int> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        vector <int> show(k+1);
        for (int i = 0; i < d; i++) show[inp[i]]++;
        answer = 0;
        for (auto &it:show) if (it) answer++;
        tmp = answer;
        for (int i = d; i < n; i++){
            if (show[inp[i-d]]==1) tmp--;
            show[inp[i-d]]--;
            if (show[inp[i]]==0) tmp++;
            show[inp[i]]++;
            answer = min(answer, tmp);
        }
        cout << answer << '\n';
    }
    return 0;
}