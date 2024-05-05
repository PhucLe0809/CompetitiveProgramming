#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, k, cnt, res, s;
    string str;
    int mp[255];
    while (test--){
        cin >> n >> k >> str;
        fill(mp, mp+255, 0);
        for (auto it:str) mp[it]++;
        cnt = s = 0;
        for (int i = 'A'; i <= 'Z'; i++){
            res = min(mp[i], mp[i+32]);
            cnt += res;
            mp[i] -= res; mp[i+32] -= res;
            s += (mp[i]+mp[i+32])/2;
        }
        cout << cnt+min(k, s) << '\n';
    }
    return 0;
}