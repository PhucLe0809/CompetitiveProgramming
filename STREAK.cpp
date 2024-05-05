#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    vector <string> inp(n);
    for (auto &it:inp) cin >> it;
    if (inp.back() == "Heads") inp.push_back("Tails");
    else inp.push_back("Heads");
    int a = 0, b = 0, cnt = 1;
    for (int i = 1; i <= n; i++){
        if (inp[i] == inp[i-1]) cnt++;
        else{
            if (inp[i] == "Heads") b = max(b, cnt);
            else a = max(a, cnt);
            cnt = 1;
        }
    }
    cout << a << " " << b;
    return 0;
}