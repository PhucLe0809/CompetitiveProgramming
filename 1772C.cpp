#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, k;
    while (test--){
        cin >> k >> n;
        vector <int> out;
        out.push_back(1);
        for (int i = 1; i < k; i++){
            if (out[i-1]+i<=n-(k-i)+1){
                out.push_back(out[i-1]+i);
            }else break;
        }
        if (out.size()<k){
            for (int i = out.back()+1; out.size()<k; i++){
                out.push_back(i);
            }
        }
        for (auto &it:out) cout << it << " ";
        cout << '\n';
    }
    return 0;
}