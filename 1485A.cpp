#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int a, b, answer, x, y, cnt;
    while (test--){
        cin >> a >> b;
        answer = INT_MAX;
        y = b;
        for (int i = 0; i < 1000; i++, b++){
            if (b==1) continue;
            cnt = b-y;
            x = a;
            while (x!=0){
                cnt++; x /= b;
            }
            answer = min(answer, cnt);
        }
        cout << answer << '\n';
    }
    return 0;
}