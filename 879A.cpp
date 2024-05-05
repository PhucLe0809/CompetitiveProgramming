#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int s, d, cnt;
    cnt = 0;
    while (n--){
        cin >> s >> d;
        if (s>cnt) cnt = s;
        else{
            cnt += (s+((cnt-s)/d+1)*d)-cnt;
        }
    }
    cout << cnt;
    return 0;
}