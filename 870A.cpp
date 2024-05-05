#include <bits/stdc++.h>

using namespace std;
vector <int> a, b;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x; a.push_back(x);
    }
    for (int i = 0; i < m; i++){
        cin >> x; b.push_back(x);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (auto t:a){
        if (binary_search(b.begin(), b.end(), t)){
            cout << t; return 0;
        }
    }
   for (auto t:b){
        if (binary_search(a.begin(), a.end(), t)){
            cout << t; return 0;
        }
    }
    int c = *min_element(a.begin(), a.end());
    int d = *min_element(b.begin(), b.end());
    if (c==d) cout << c;
    else cout << min(c, d) << max(c, d);
    return 0;
}