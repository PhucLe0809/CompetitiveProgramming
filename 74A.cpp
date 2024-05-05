#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <pair<int, string>> inp(n);
    string str; int s, x, a, b;
    for (int i = 0; i < n; i++){
        cin >> str; inp[i].second = str;
        cin >> a >> b;
        s = 100*a - 50*b;
        for (int j = 0; j < 5; j++){
            cin >> x; s += x;
        }
        inp[i].first = s;
    }
    sort(inp.begin(), inp.end(), greater<>());
    cout << inp[0].second;
    return 0;
}