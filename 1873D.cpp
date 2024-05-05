#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n, k; cin >> n >> k;
        string str; cin >> str;
        int i = 0, answer = 0;
        while (i < n){
            if (str[i] != 'B'){
                i++; continue;
            }
            answer++;
            i += k;
        }
        cout << answer << '\n';
    }
    return 0;
}