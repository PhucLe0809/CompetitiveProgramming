#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        vector <int> cordi(n+1);
        for (int i = 1; i <= n; i++) cin >> cordi[i];
        vector <int> hight(n+1);
        vector <int> prefix(n+1);
        for (int i = 1; i <= n; i++){
            cin >> hight[i];
            prefix[i] = prefix[i-1] + hight[i];
        }
        vector <int> water(n+2); water[n+1] = LONG_MAX;
        cordi[0] = -1; hight[0] = LONG_MAX;
        deque <int> que; que.push_back(0);
        for (int i = 1; i <= n; i++){
            while (!que.empty() && hight[que.back()] < hight[i]) que.pop_back();
            int pivot = que.back();
            water[i] = water[pivot] + (cordi[i] - cordi[pivot] - 1) * hight[i] - (prefix[i] - prefix[pivot] - hight[i]);
            que.push_back(i);
        }
        for (auto &it:water) cout << it << " ";
        int q; cin >> q;
        while (q--){
            int amount; cin >> amount;
            int pos = lower_bound(water.begin(), water.end(), amount) - water.begin(); 
            cout << pos - 1 << endl;
        }
    }
    return 0;
}