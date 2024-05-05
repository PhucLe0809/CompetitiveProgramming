#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    string str; cin >> str;
    int answer = 0, cnt = n-1;
    vector <int> tick(26);
    for (auto &it:str){
        if (tick[(int)it - 97] == 0){
            tick[(int)it - 97] = 1; answer += cnt;
        }
        cnt--;
    }
    for (auto &it:tick) answer += it;
    cout << answer << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int test; cin >> test;
    while (test--){
        GOTOHANOI();
    }
    return 0;
}