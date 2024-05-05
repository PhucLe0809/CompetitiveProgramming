#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <pair<int, int>> inp(n);
    for (int i = 0; i < n; i++){
        cin >> inp[i].first >> inp[i].second;
    }
    bool check = false;
    for (int i = 0; i<n-1 && !check; i++){
        for (int j = i+1; j<n && !check; j++){
            if (inp[i].first+inp[i].second==inp[j].first
            && inp[j].first+inp[j].second==inp[i].first){
                check = true;
            }
        }
    }
    if (check) cout << "YES\n"; else cout << "NO\n";
    return 0;
}