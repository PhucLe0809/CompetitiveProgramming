#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    string str; cin >> str;
    int64_t k; cin >> k;
    int64_t val[30];
    int64_t m = 0;
    for (int64_t i = 0; i < 26; i++){
        cin >> val[i]; m = max(m, val[i]);
    }
    int64_t answer = 0;
    for (int64_t i = 0; i < str.size(); i++){
        answer += ((i+1)*val[str[i]-'a']);
    }
    int64_t n = str.size();
    answer += m*((n+1)+(n+k))*((n+k)-(n+1)+1)/2;
    cout << answer << '\n';
    return 0;
}