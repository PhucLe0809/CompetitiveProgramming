#include <bits/stdc++.h>
#define int long long
#define endl '\n'

using namespace std;

void GOTOHANOI(){
    int n; cin >> n;
    int neg = 0, pos = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        neg += (int)(x < 0);
        pos += (int)(x > 0);
    }
    int answer = (neg > pos)?((neg - pos)/2 + (neg - pos)%2):(0);
    neg -= answer; answer += (int)(neg % 2 != 0);
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