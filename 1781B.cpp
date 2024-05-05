#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, cnt;
    while (test--){
        cin >> n;
        vector <int> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp.begin(), inp.end());
        cnt = 0; inp.push_back(INT_MAX);
        for (int i = 0; i < n; i++){
            if (inp[i]<=i && i+1<inp[i+1]) cnt++;
        }
        if (inp[0]!=0) cnt++;
        cout << cnt << '\n';
    }
    return 0;
}