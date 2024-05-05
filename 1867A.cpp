#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        vector <pair<int, int>> inp(n);
        for (int i = 0; i < n; i++){
            cin >> inp[i].first;
            inp[i].second = i;
        }
        sort(inp.begin(), inp.end());
        vector <int> answer(n);
        for (int i = 0; i < n; i++){
            answer[inp[i].second] = n-i;
        }
        for (auto &it:answer) cout << it << " ";
        cout << '\n';
    }
    return 0;
}