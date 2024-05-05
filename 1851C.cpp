#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int inp[maxarray];
pair <int, int> lft[maxarray], rght[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n, k; cin >> n >> k;
        memset(lft, 0, sizeof(lft));
        memset(rght, 0, sizeof(rght));
        for (int i = 0; i < n; i++) cin >> inp[i];
        for (int i = 0; i < n; i++){
            if (inp[i] == inp[0]){
                lft[inp[0]].first++;
                if (lft[inp[0]].first <= k) lft[inp[0]].second = i;
            }
        }
        for (int i = n-1; i >= 0; i--){
            if (inp[i] == inp[n-1]){
                rght[inp[n-1]].first++;
                if (rght[inp[n-1]].first <= k) rght[inp[n-1]].second = i;
            }
        }
        if (lft[inp[0]].first >= k && rght[inp[n-1]].first >= k){
            if (inp[0] == inp[n-1]){
                cout << "YES\n";
            }else{
                if (lft[inp[0]].second < rght[inp[n-1]].second) cout << "YES\n";
                else cout << "NO\n";
            }
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}