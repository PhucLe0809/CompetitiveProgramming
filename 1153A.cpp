#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n, t; cin >> n >> t;
    int s, d;
    vector <pair<int, int>> scan(n);
    for (int i = 0; i < n; i++){
        cin >> s >> d;
        if (s>=t) scan[i].first = s;
        else scan[i].first = int(ceil((t-s)*1.0/d))*d+s;
        scan[i].second = i;
    }
    sort(scan.begin(), scan.end());
    cout << scan[0].second+1;
    return 0;
}