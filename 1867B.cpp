#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    while (test--){
        int n; cin >> n;
        string str; cin >> str;
        int cnt = 0;
        for (int i = 0; i < n/2; i++){
            if (str[i] == str[n-i-1]) cnt++;
        }
        vector <char> answer(n+1, '0');
        if (n%2 == 0){
            int base = n/2 - cnt;
            answer[base] = '1';
            for (int i = 1; i <= cnt; i++){
                answer[base + 2*i] = '1';
            }
        }else{
            int base = n/2 - cnt;
            answer[base] = '1';
            for (int i = 0; i <= cnt; i++){
                answer[base + 2*i] = '1';
                answer[base + 2*i + 1] = '1';
            }
        }
        reverse(answer.begin(), answer.end());
        for (auto &it:answer) cout << it;
        cout << '\n';
    }
    return 0;
}