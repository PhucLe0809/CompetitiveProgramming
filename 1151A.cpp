#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string str; cin >> str;
    string pivot = "ACTG";
    int answer, cnt; answer = INT_MAX;
    char a, b;
    for (int i = 0; i <= n-4; i++){
        cnt = 0;
        for (int j = 0; j < 4; j++){
            a = min(pivot[j], str[i+j]);
            b = max(pivot[j], str[i+j]);
            cnt += min(b-a, (a-'a')+('z'-b+1));
        }
        answer = min(answer, cnt);
    }
    cout << answer;
    return 0;
}