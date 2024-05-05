#include <bits/stdc++.h>
#define maxarray 100005

using namespace std; 
pair <int32_t, int32_t> inp[maxarray];

bool comp(pair <int32_t, int32_t> a, pair <int32_t, int32_t> b){
    if (a.first == b.first) return (a.second < b.second);
    else return (a.first < b.first);
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, a, b, x, y; 
    bool check;
    while (test--){
        cin >> a >> b >> n;
        for (int i = 0; i < n; i++) cin >> inp[i].first;
        for (int i = 0; i < n; i++) cin >> inp[i].second;
        sort(inp, inp+n, comp);
        check = true;
        for (int i = 0; i<n && check; i++){
            x = ceil(inp[i].second*1.0/a);
            y = ceil(b*1.0/inp[i].first);
            if (y < x) check = false;
            b -= x*inp[i].first;
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}