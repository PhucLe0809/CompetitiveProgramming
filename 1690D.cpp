#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int n, k, b, w, answer;
    string str;
    while (test--){
        cin >> n >> k >> str;
        b = w = 0;
        for (int i = 0; i < k; i++){
            if (str[i]=='B') b++;
            else w++;
        }
        answer = w;
        for (int i = k; i < n; i++){
            if (str[i]=='B') b++;
            else w++;
            if (str[i-k]=='B') b--;
            else w--;
            answer = min(answer, w);
        }
        cout << answer << '\n';
    }
    return 0;
}