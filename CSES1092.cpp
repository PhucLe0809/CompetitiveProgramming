#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int64_t n; cin >> n;
    if ((n*(n+1)/2) % 2 != 0){
        cout << "NO\n";
        return 0;
    }
    vector <bool> scan(n, true);
    int64_t pivot = n*(n+1)/4;
    int64_t run = n;
    vector <int64_t> one;
    while (pivot){
        if (pivot >= run){
            pivot -= run;
            scan[run - 1] = false;
            one.push_back(run);
        }
        run--;
    }
    vector <int64_t> two;
    for (int i = 0; i < n; i++){
        if (scan[i]) two.push_back(i+1);
    }
    cout << "YES\n";
    cout << one.size() << '\n';
    for (auto &it:one) cout << it << " "; cout << '\n';
    cout << two.size() << '\n';
    for (auto &it:two) cout << it << " "; cout << '\n';
    return 0;
}