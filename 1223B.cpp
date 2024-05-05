#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    string s, t; bool check;
    while (test--){
        cin >> s >> t;
        sort(t.begin(), t.end()); check = false;
        for (int i = 0; i<s.size() && !check; i++){
            check = binary_search(t.begin(), t.end(), s[i]);
        }
        if (check) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}