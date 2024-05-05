#include <bits/stdc++.h>
#define maxarray 200005

using namespace std;
int64_t inp[maxarray];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int test; cin >> test;
    int64_t w, h, k, answer;
    while (test--){
        cin >> w >> h;
        answer = 0;
        for (int i = 0; i < 4; i++){
            cin >> k;
            for (int j = 0; j < k; j++) cin >> inp[j];
            if (i<2) answer = max(answer, (inp[k-1]-inp[0])*h);
            else answer = max(answer, (inp[k-1]-inp[0])*w);
        }
        cout << answer << '\n';
    }
    return 0;
}