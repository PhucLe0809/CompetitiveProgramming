#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, a, b;
    while (test--){
        cin >> n;
        priority_queue <int> scan;
        vector <pair<int, int>> out;
        for (int i = 1; i <= n; i++) scan.push(i);
        for (int i = 1; i <= n-1; i++){
            a = scan.top(); scan.pop();
            b = scan.top(); scan.pop();
            out.push_back({a, b});
            scan.push((a+b+1)/2);
        }
        cout << 2 << '\n';
        for (auto &it:out){
            cout << it.first << " " << it.second << '\n';
        }
    }
    return 0;
}