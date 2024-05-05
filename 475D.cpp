#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    vector <int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    map <int, int64_t> answer, div, nextdiv;
    for (int i = 0; i < n; i++){
        nextdiv.clear();
        for (auto &it:div){
            nextdiv[__gcd(it.first, inp[i])] += it.second;
        }
        nextdiv[inp[i]]++;
        swap(div, nextdiv);
        for (auto &it:div) answer[it.first] += it.second;
    }
    int q; cin >> q;
    int node;
    while (q--){
        cin >> node; cout << answer[node] << '\n';
    }
    return 0;
}