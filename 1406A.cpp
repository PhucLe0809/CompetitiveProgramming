#include <bits/stdc++.h>

using namespace std; 

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int32_t test; cin >> test;
    int32_t n, x, a, b;
    bool check;
    while (test--){
        cin >> n;
        map <int32_t, int32_t> mp;
        for (int i = 0; i < n; i++){
            cin >> x;
            mp[x]++;
        }
        vector <pair<int32_t, int32_t>> scan;
        for (auto it:mp) scan.push_back({it.first, it.second});
        if (scan[0].first>0){
            cout << 0 << '\n'; continue;
        }
        check = true;
        if (scan[0].second==1){ a=1; b=0; check = false; }
        else a = b = 1;
        for (int i = 1; i < scan.size(); i++){
            if (scan[i].first-scan[i-1].first>1) break;
            a++;
            if (scan[i].second==1) check = false;
            if (check) b++;
        }
        cout << a+b << '\n';
    }
    return 0;
}