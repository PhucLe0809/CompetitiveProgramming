#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, h, a, b, cnt;
    while (test--){
        cin >> n >> h;
        vector <int> inp(n);
        for (int i = 0; i < n; i++) cin >> inp[i];
        sort(inp.begin(), inp.end());
        a = inp[n-2]; b = inp[n-1];
        cnt = h/(a+b); h -= (h/(a+b))*(a+b);
        cnt *= 2; 
        if (h!=0) cnt++;
        if (h > b) cnt++;
        cout << cnt << '\n';
    }
    return 0;
}