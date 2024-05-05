#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    map <int, int> mp; int x;
    for (int i = 0; i < n; i++){
        cin >> x; mp[x] = i+1;
    }
    int maxx = INT_MAX;
    int index;
    for (auto &it:mp){
        if (it.second < maxx){
            index = it.first;
            maxx = it.second;
        }
    }
    cout << index;
    return 0;
}