#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    map <int, int> mp; int maxx = 0;
    for (int i = 0; i < n; i++){
        cin >> inp[i]; mp[inp[i]]++;
        maxx = max(maxx, mp[inp[i]]);
    }
    int fre = 0;
    map <int, int> pos;
    for (int i = 0; i < n; i++){
        if (mp[inp[i]] == maxx){
            pos[inp[i]] = i;
        }
    }
    int answer = n;
    for (auto &it:pos) answer = min(answer, it.second);
    cout << inp[answer];
    return 0;
}