#include <bits/stdc++.h>

using namespace std;
int inp[105][105];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, infront;
    while (test--){
        cin >> n;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n-1; j++){
                cin >> inp[i][j];
            }
        }
        map <int, int> mp;
        for (int i = 0; i < n; i++) mp[inp[i][0]]++;
        vector <int> out;
        for (auto it:mp){
            if (it.second==n-1) out.push_back(it.first);
            else infront = it.first;
        }
        out.push_back(infront);
        for (int j = 1; j < n-1; j++){
            for (int i = 0; i < n; i++){
                if (inp[i][j]!=infront){
                    infront = inp[i][j];
                    out.push_back(infront);
                    break;
                }
            }
        }
        for (auto it:out) cout << it << " ";
        cout << '\n';
    }
    return 0;
}