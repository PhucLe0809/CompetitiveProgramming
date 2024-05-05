#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n, x; cin >> n >> x;
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        int num; cin >> num; mp[num]++;
    }
    map <int, int> :: iterator i = mp.begin(), j = mp.end(); j--;
    int cnt = 0;
    while (i->first < j->first){
        if (i->first + j->first == x){
            cnt += (i->second) * (j->second);
            i++; j--; continue;
        }
        if (i->first + j->first < x) i++;
        else j--;
    }
    if (!(x & 1)) cnt += mp[x/2] * (mp[x/2] - 1) / 2;
    cout << cnt << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test = 1; //cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}